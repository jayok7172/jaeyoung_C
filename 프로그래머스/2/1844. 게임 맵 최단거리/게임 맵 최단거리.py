from collections import deque
def solution(maps):
    answer = 0
    queue = deque()
    queue.append((0,0))
    y,x = len(maps),len(maps[0])
    directions = [(-1,0),(1,0),(0,-1),(0,1)]
    visited = [[False]*x for _ in range(y)]
    dir = [[0]*x for _ in range(y)]
    dir[0][0] = 1
    visited[0][0] = True
    while queue :
        m,n = queue.popleft()
        for dm,dn in directions:
            nm,nn = m + dm, n + dn
            if 0<=nm<y and 0<=nn<x and visited[nm][nn] ==False and maps[nm][nn]==1:
                visited[nm][nn] = True
                dir[nm][nn] = dir[m][n] +1
                queue.append((nm,nn))
    if dir[y-1][x-1] == 0:
        return -1
    else :
        return dir[y-1][x-1]