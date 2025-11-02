import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    M, N, x, y = map(int, input().split())
    result = False
    for ans in range(x, M * N + 1, M):
        if (ans - y) % N == 0:
            print(ans)
            result = True
            break
    if not result:
        print(-1)
