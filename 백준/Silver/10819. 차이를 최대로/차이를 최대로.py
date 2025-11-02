from itertools import permutations

N = int(input())
A = list(map(int, input().split()))

max_result = 0

for perm in permutations(A):
    current_sum = 0
    for i in range(N - 1):
        current_sum += abs(perm[i] - perm[i + 1])
    max_result = max(max_result, current_sum)

print(max_result)
