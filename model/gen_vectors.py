"""Matmul test vectors with bit-exact expected results.

Usage: python3 model/gen_vectors.py <regime> <count> [seed] [N]
Regimes: uniform5 wide sparse cancel small large
Writes vectors/mm_<regime>.txt, one matmul per line: A, B, expected C (hex BF16, row-major).
"""
import os
import random
import struct
import sys

sys.path.insert(0, os.path.dirname(__file__))
from golden_bitexact import matmul


def to_bf16(f):
    try:
        bits = struct.unpack('>I', struct.pack('>f', f))[0]
    except OverflowError:
        bits = 0x7F800000 if f > 0 else 0xFF800000
    return ((bits + 0x7FFF + ((bits >> 16) & 1)) & 0xFFFFFFFF) >> 16


def sampler(regime):
    sign = lambda: random.choice([-1, 1])
    return {
        'uniform5': lambda: random.uniform(-5, 5),
        'wide':     lambda: sign() * 2 ** random.uniform(-20, 20),
        'sparse':   lambda: 0.0 if random.random() < 0.5 else random.uniform(-5, 5),
        'small':    lambda: sign() * 2 ** random.uniform(-70, -60),
        'large':    lambda: sign() * 2 ** random.uniform(60, 66),
    }[regime]


def cancel_case(n):
    # columns 2,3 of A cancel columns 0,1 against matching rows of B
    A = [[random.uniform(-5, 5) for _ in range(n)] for _ in range(n)]
    B = [[random.uniform(-5, 5) for _ in range(n)] for _ in range(n)]
    for j in range(n):
        B[2][j] = B[0][j]
        B[3][j] = B[1][j]
    for i in range(n):
        A[i][2] = -A[i][0]
        A[i][3] = -A[i][1] * (1 + 2 ** -6 * random.choice([0, 1]))
    return A, B


def main():
    regime, count = sys.argv[1], int(sys.argv[2])
    random.seed(int(sys.argv[3]) if len(sys.argv) > 3 else 1)
    n = int(sys.argv[4]) if len(sys.argv) > 4 else 4

    os.makedirs('vectors', exist_ok=True)
    with open(f'vectors/mm_{regime}.txt', 'w') as f:
        for _ in range(count):
            if regime == 'cancel':
                A, B = cancel_case(n)
            else:
                g = sampler(regime)
                A = [[g() for _ in range(n)] for _ in range(n)]
                B = [[g() for _ in range(n)] for _ in range(n)]
            A = [[to_bf16(v) for v in row] for row in A]
            B = [[to_bf16(v) for v in row] for row in B]
            C = matmul(A, B)
            vals = [v for row in A for v in row] + [v for row in B for v in row] + [v for row in C for v in row]
            f.write(' '.join(f'{v:04X}' for v in vals) + '\n')


if __name__ == '__main__':
    main()
