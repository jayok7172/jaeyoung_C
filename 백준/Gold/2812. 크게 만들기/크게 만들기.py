import sys
input = sys.stdin.readline

N, K = map(int, input().split())
A = list(input().strip())

stack = []
stack.append(A[0])

for i in range(1, N):
    while K > 0 and stack:
        if stack[-1] < A[i]:
            stack.pop()
            K -= 1
        else:
            break
    stack.append(A[i])

if K > 0:
    stack = stack[:-K]

print(''.join(stack))