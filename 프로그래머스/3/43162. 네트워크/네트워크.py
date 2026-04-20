def solution(n, computers):
    answer = 0
    visited = [False] * n
    def dfs(idx,visited):
        visited[idx] = True
        for connect in range(n):
            if connect != idx and computers[idx][connect] ==1 :
                if visited[connect] == False:
                    dfs(connect,visited)
    for i in range(n):
        if visited[i] == False:
            dfs(i,visited)
            answer+=1
        
    return answer