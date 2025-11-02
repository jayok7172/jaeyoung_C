import sys
input = sys.stdin.readline

N,M = map(int, input().split())
L = [[] for i in range(N)]
for i in range(M):
    a,b = map(int,input().split())
    L[a].append(b)
    L[b].append(a)

visited = [False] * N
found = False

def dfs(u,depth):
    global found
    if found:
        return
    if depth==5:
        found = True
        return
    visited[u] = True
    for v in L[u]:
        if not visited[v]:
            dfs(v,depth+1)
            if found:
                return
            
    visited[u] = False
for i in range(N):
    dfs(i,1)
    if found :
        break

print(1 if found else 0)