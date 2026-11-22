"""Unit test vectors for bf16_mul and fp32_add.

bf16_mul: expected = exact product as FP32, subnormals flushed to zero, overflow -> Inf
fp32_add: expected = exact sum rounded toward zero, flush to zero, overflow -> Inf

Usage: python3 model/gen_unit_vectors.py   (writes vectors/unit_mul.txt and vectors/unit_add.txt)
"""
import random
import struct
from fractions import Fraction

random.seed(7)


def bf16_class(cls):
    s = random.getrandbits(1) << 15
    if cls == 'zero':
        return s
    if cls == 'sub':
        return s | random.randint(1, 127)
    if cls == 'inf':
        return s | 0x7F80
    if cls == 'nan':
        return s | 0x7F80 | random.randint(1, 127)
    e = random.randint(100, 154) if cls == 'mid' else random.randint(1, 254)
    return s | (e << 7) | random.getrandbits(7)


def f32_class(cls):
    s = random.getrandbits(1) << 31
    if cls == 'zero':
        return s
    if cls == 'inf':
        return s | 0x7F800000
    if cls == 'big':
        return s | (254 << 23) | random.getrandbits(23)
    return s | (random.randint(110, 144) << 23) | random.getrandbits(23)


def bf16_value(x):
    e, m = (x >> 7) & 0xFF, x & 0x7F
    if e == 0:
        return Fraction(0)
    v = (1 + Fraction(m, 128)) * Fraction(2) ** (e - 127)
    return -v if x >> 15 else v


def f32_value(x):
    e, m = (x >> 23) & 0xFF, x & 0x7FFFFF
    if e == 0:
        return Fraction(0)
    v = (1 + Fraction(m, 2 ** 23)) * Fraction(2) ** (e - 127)
    return -v if x >> 31 else v


def to_f32_rtz(x, sign_if_zero=0):
    if x == 0:
        return sign_if_zero
    s = 0x80000000 if x < 0 else 0
    x = abs(x)
    e = x.numerator.bit_length() - x.denominator.bit_length()
    if Fraction(2) ** e > x:
        e -= 1
    if Fraction(2) ** (e + 1) <= x:
        e += 1
    if e > 127:
        return s | 0x7F800000
    if e < -126:
        return s
    m = int((x / Fraction(2) ** e - 1) * 2 ** 23)
    return s | ((e + 127) << 23) | m


def ref_mul(a, b):
    sign = ((a ^ b) & 0x8000) << 16
    a_nan = (a & 0x7F80) == 0x7F80 and (a & 0x7F)
    b_nan = (b & 0x7F80) == 0x7F80 and (b & 0x7F)
    a_inf = (a & 0x7FFF) == 0x7F80
    b_inf = (b & 0x7FFF) == 0x7F80
    a_zero = (a & 0x7F80) == 0
    b_zero = (b & 0x7F80) == 0
    if a_nan or b_nan or (a_inf and b_zero) or (b_inf and a_zero):
        return 0x7FC00000
    if a_inf or b_inf:
        return sign | 0x7F800000
    return to_f32_rtz(bf16_value(a) * bf16_value(b), sign)


def ref_add(a, b):
    if (a & 0x7FFFFFFF) == 0x7F800000:
        return a
    return to_f32_rtz(f32_value(a) + f32_value(b))


with open('vectors/unit_mul.txt', 'w') as f:
    plan = [('mid', 'mid', 20000), ('normal', 'normal', 20000), ('zero', 'normal', 500),
            ('normal', 'zero', 500), ('sub', 'normal', 500), ('inf', 'normal', 300),
            ('nan', 'normal', 300), ('inf', 'zero', 100)]
    for ca, cb, n in plan:
        for _ in range(n):
            a, b = bf16_class(ca), bf16_class(cb)
            f.write(f"{a:04X} {b:04X} {ref_mul(a, b):08X}\n")

with open('vectors/unit_add.txt', 'w') as f:
    plan = [('mid', 'mid', 20000), ('cancel', None, 5000), ('zero', 'mid', 500),
            ('zero', 'zero', 100), ('big', 'big', 500), ('inf', 'mid', 300)]
    for ca, cb, n in plan:
        for _ in range(n):
            if ca == 'cancel':
                a = f32_class('mid')
                b = (a ^ 0x80000000) ^ random.getrandbits(random.randint(1, 12))
            else:
                a, b = f32_class(ca), f32_class(cb)
            f.write(f"{a:08X} {b:08X} {ref_add(a, b):08X}\n")
