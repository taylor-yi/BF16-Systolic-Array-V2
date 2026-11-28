"""v3 matmul test vectors: reduction length K, FP32 expected results.

Usage: python3 model/gen_vectors_v3.py <regime> <count> [seed] [N] [K]
  N = array size (default 4), K = reduction length (default 16)
Regimes: uniform5 wide sparse cancel small large

Writes vectors/v3_n<N>_k<K>/mm_<regime>.txt, one matmul per line:
  A  (N x K BF16, row-major, 4 hex digits each)
  B  (K x N BF16, row-major, 4 hex digits each)
  C  (N x N FP32, row-major, 8 hex digits each)

Feed order for the array: on cycle k, a_flat row r = A[r][k] and
b_flat column c = B[k][c], for k = 0..K-1.
"""
import os
import random
import sys

sys.path.insert(0, os.path.dirname(__file__))
from golden_bitexact import matmul_fp32
from gen_vectors import to_bf16, sampler


def cancel_case(n, k):
    """Second half of the reduction cancels the first half.

    A[i][j + h] = -A[i][j] and B[j + h][c] = B[j][c], so the products pair up
    and cancel, with an occasional tiny perturbation so the result is a small
    nonzero leftover. Exercises subtraction and renormalization in fp32_add.
    """
    A = [[random.uniform(-5, 5) for _ in range(k)] for _ in range(n)]
    B = [[random.uniform(-5, 5) for _ in range(n)] for _ in range(k)]
    h = k // 2
    for j in range(h):
        for c in range(n):
            B[j + h][c] = B[j][c]
        for i in range(n):
            A[i][j + h] = -A[i][j] * (1 + 2 ** -6 * random.choice([0, 1]))
    return A, B


def main():
    if len(sys.argv) < 3:
        sys.exit(__doc__)
    regime, count = sys.argv[1], int(sys.argv[2])
    random.seed(int(sys.argv[3]) if len(sys.argv) > 3 else 1)
    n = int(sys.argv[4]) if len(sys.argv) > 4 else 4
    k = int(sys.argv[5]) if len(sys.argv) > 5 else 16

    outdir = f'vectors/v3_n{n}_k{k}'
    os.makedirs(outdir, exist_ok=True)
    path = f'{outdir}/mm_{regime}.txt'
    with open(path, 'w') as f:
        for _ in range(count):
            if regime == 'cancel':
                A, B = cancel_case(n, k)
            else:
                g = sampler(regime)
                A = [[g() for _ in range(k)] for _ in range(n)]
                B = [[g() for _ in range(n)] for _ in range(k)]
            A = [[to_bf16(v) for v in row] for row in A]
            B = [[to_bf16(v) for v in row] for row in B]
            C = matmul_fp32(A, B)
            words = [f'{v:04X}' for row in A for v in row] \
                  + [f'{v:04X}' for row in B for v in row] \
                  + [f'{v:08X}' for row in C for v in row]
            f.write(' '.join(words) + '\n')
    print(f'wrote {count} vectors to {path}')


if __name__ == '__main__':
    main()
