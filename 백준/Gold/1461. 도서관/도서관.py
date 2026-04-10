import sys
input = sys.stdin.readline

N, M = map(int, input().split())
books = list(map(int, input().split()))

left = []
right = []

for x in books:
    if x < 0:
        left.append(-x)   # 절댓값으로 저장
    else:
        right.append(x)

left.sort(reverse=True)
right.sort(reverse=True)

answer = 0

# 왼쪽에서 M개씩 끊어서 가장 먼 거리만 더함
for i in range(0, len(left), M):
    answer += left[i] * 2

# 오른쪽도 동일
for i in range(0, len(right), M):
    answer += right[i] * 2

# 전체 중 가장 먼 곳은 마지막에 처리하면 돌아올 필요 없음
max_dist = 0
if left:
    max_dist = max(max_dist, left[0])
if right:
    max_dist = max(max_dist, right[0])

answer -= max_dist

print(answer)