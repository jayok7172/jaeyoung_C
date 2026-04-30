from collections import deque

def solution(number, k):
    answer = ''
    stack =[]
    num = list(number)
    stack.append(num[0])
    for i in range(1,len(num)):
        while k>0 and stack:
            if num[i] > stack[-1]:
                stack.pop()
                k-=1
            else:
                break
        stack.append(num[i])
    if k:
        stack = stack[:-k]
    answer = ''.join(stack)
    return answer