import sys
input = sys.stdin.readline

LIMIT = 1000000

is_prime = [True] * (LIMIT + 1)
is_prime[0] = is_prime[1] = False
for p in range(2, int(LIMIT ** 0.5) + 1):
    if is_prime[p]:
        for j in range(p * p, LIMIT + 1, p):
            is_prime[j] = False

while True:
    N = int(input())
    if N == 0:
        break

    found = False
    for a in range(3, N // 2 + 1, 2):
        if is_prime[a] and is_prime[N - a]:
            print("%d = %d + %d" % (N, a, N - a))
            found = True
            break

    if not found:
        print("Goldbach's conjecture is wrong.")
