def solution(n, words):
    answer = []
    stack = []
    stack.append(words[0])
    for i in range(1,len(words)):
        if stack[-1][-1] != words[i][0] or words[i] in stack:
            answer.append(i%n+1)
            answer.append(i//n+1)
            break
        else:
            stack.append(words[i])
    if not answer:
        answer =[0,0]
    return answer