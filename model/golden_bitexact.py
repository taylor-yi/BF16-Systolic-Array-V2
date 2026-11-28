"""Bit-exact reference for the Mini-TPU datapath.

Numeric behavior (matches the RTL):
  - BF16 inputs, subnormals treated as zero
  - exact BF16 x BF16 product in FP32
  - FP32 accumulation in order k = 0..K-1, round toward zero, flush to zero,
    overflow -> Inf
  - products with an exact-zero operand are skipped (accumulator holds)
  - v2 (matmul): final FP32 -> BF16 by truncation, square N x N inputs
  - v3 (matmul_fp32): FP32 output, A is N x K and B is K x N
"""
from fractions import Fraction

NAN32 = 0x7FC00000


def bf16_value(x):
    """BF16 bits -> Fraction, or a float for Inf/NaN."""
    e, m = (x >> 7) & 0xFF, x & 0x7F
    sign = -1 if x >> 15 else 1
    if e == 0xFF:
        return float('nan') if m else sign * float('inf')
    if e == 0:
        return Fraction(0)
    return sign * (1 + Fraction(m, 128)) * Fraction(2) ** (e - 127)


def f32_value(x):
    """FP32 bits -> Fraction, or a float for Inf/NaN."""
    e, m = (x >> 23) & 0xFF, x & 0x7FFFFF
    sign = -1 if x >> 31 else 1
    if e == 0xFF:
        return float('nan') if m else sign * float('inf')
    if e == 0:
        return Fraction(0)
    return sign * (1 + Fraction(m, 2 ** 23)) * Fraction(2) ** (e - 127)


def to_f32(v):
    """Fraction or Inf/NaN float -> FP32 bits, round toward zero, flush to zero."""
    if isinstance(v, float):
        if v != v:
            return NAN32
        return 0x7F800000 if v > 0 else 0xFF800000
    if v == 0:
        return 0
    sign = 0x80000000 if v < 0 else 0
    v = abs(v)
    e = v.numerator.bit_length() - v.denominator.bit_length()
    if Fraction(2) ** e > v:
        e -= 1
    if Fraction(2) ** (e + 1) <= v:
        e += 1
    if e > 127:
        return sign | 0x7F800000
    if e < -126:
        return 0
    m = int((v / Fraction(2) ** e - 1) * 2 ** 23)
    return sign | ((e + 127) << 23) | m


def special_mul(a, b):
    """Product when at least one operand is Inf or NaN (the other is not an exact zero)."""
    va, vb = bf16_value(a), bf16_value(b)
    if (isinstance(va, float) and va != va) or (isinstance(vb, float) and vb != vb):
        return NAN32
    if va == 0 or vb == 0:          # Inf x subnormal-flushed-to-zero
        return NAN32
    return to_f32(float(va) * float(vb))


def mac(a, b, acc):
    """One PE step: acc + a*b, all in FP32 bits."""
    if (a & 0x7FFF) == 0 or (b & 0x7FFF) == 0:
        return acc
    if (a & 0x7F80) == 0x7F80 or (b & 0x7F80) == 0x7F80:
        p = special_mul(a, b)
    else:
        p = to_f32(bf16_value(a) * bf16_value(b))
    vp, vacc = f32_value(p), f32_value(acc)
    if isinstance(vp, float) or isinstance(vacc, float):
        return to_f32(float(vp) + float(vacc))
    return to_f32(vp + vacc)


def dot(a_row, b_col):
    acc = 0
    for a, b in zip(a_row, b_col):
        acc = mac(a, b, acc)
    return acc >> 16


def matmul(A, B):
    n = len(A)
    return [[dot(A[i], [B[k][j] for k in range(n)]) for j in range(n)] for i in range(n)]


# ---------------------------------------------------------------- v3
# FP32 output and a reduction length K separate from the array size N.

def dot_fp32(a_row, b_col):
    """One output element: K products accumulated in order, FP32 bits out."""
    acc = 0
    for a, b in zip(a_row, b_col):
        acc = mac(a, b, acc)
    return acc


def matmul_fp32(A, B):
    """A is N x K, B is K x N (BF16 bits). Returns N x N FP32 bits."""
    n, k = len(A), len(A[0])
    assert len(B) == k and all(len(row) == n for row in B), "A must be N x K and B must be K x N"
    return [[dot_fp32(A[i], [B[kk][j] for kk in range(k)]) for j in range(n)] for i in range(n)]
