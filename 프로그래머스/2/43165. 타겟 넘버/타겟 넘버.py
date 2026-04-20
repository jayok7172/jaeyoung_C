def solution(numbers, target):
    answer = 0
    def dfs(idx,result):
        nonlocal answer
        if idx == len(numbers) and result == target:
            answer+=1
            return
        elif idx < len(numbers):
            dfs(idx+1,result+numbers[idx])
            dfs(idx+1,result-numbers[idx])
    dfs(0,0)
    return answer
