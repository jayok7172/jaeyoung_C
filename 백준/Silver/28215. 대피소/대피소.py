import sys
from itertools import combinations

input = sys.stdin.readline

N, K = map(int, input().split())
home = [tuple(map(int, input().split())) for _ in range(N)]

answer = float('inf')

for shelters in combinations(home, K):
    max_dist = 0  # 이 조합에서, 가장 불리한 집의 거리

    for hx, hy in home:
        min_dist = float('inf')  # 현재 집에서 가장 가까운 대피소 거리

        for sx, sy in shelters:
            dist = abs(hx - sx) + abs(hy - sy)
            min_dist = min(min_dist, dist)

        max_dist = max(max_dist, min_dist)

    answer = min(answer, max_dist)

print(answer)