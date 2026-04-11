from collections import deque

def solution(maps):
    answer = 0
    queue = deque()
    n=len(maps)
    m = len(maps[0])
    visited = [[False] * m for _ in range(n)]
    dist = [[0] * m for _ in range(n)]
    dist[0][0] = 1
    visited[0][0] = True
    directions = [(-1,0),(1,0),(0,1),(0,-1)]
    queue.append((0,0))
    while queue:
        r,c = queue.popleft()
        for dr,dc in directions:
            nr,nc = r+dr, c+dc
            if 0 <= nr < n and 0<= nc <m:
                if maps[nr][nc] ==1 and not visited[nr][nc]:
                    dist[nr][nc] = dist[r][c] +1
                    visited[nr][nc] = True
                    queue.append((nr,nc))
    if dist[n-1][m-1]==0:
        return -1
    else:
        return dist[n-1][m-1]