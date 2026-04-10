from collections import deque
import sys
input = sys.stdin.readline

S = input().strip()
bomb = input().strip()
result = []
for i in S:
    result.append(i)
    if ''.join(result[-len(bomb):]) == bomb:
        for j in range(len(bomb)):
            result.pop()

if result :
    print(''.join(result))
else:
    print("FRULA")