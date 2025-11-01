import sys
input = sys.stdin.readline

N,M = map(int,input().split())
used = [False] * (N+1)
seq = []

def dfs(depth):
    if depth==M:
        print(*seq)
        return
    for i in range(1,N+1):
        if not used[i]:
            seq.append(i)
            dfs(depth+1)
            seq.pop()
dfs(0)