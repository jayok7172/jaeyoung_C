import sys
input = sys.stdin.readline

word = input().strip()
bomb = input().strip()

stack = []
bomb_len = len(bomb)

for ch in word:
    stack.append(ch)
    
    if len(stack) >= bomb_len:
        if ''.join(stack[-bomb_len:]) == bomb:
            for _ in range(bomb_len):
                stack.pop()

result = ''.join(stack)

print(result if result else "FRULA")