import sys
input = sys.stdin.readline

heigh = [int(input()) for _ in range(9)]
S = sum(heigh)

for i in range(9):
    for j in range(i+1, 9):
        if S - heigh[i] - heigh[j] == 100:
            fake1, fake2 = heigh[i], heigh[j]
            break
    else:
        continue
    break

# 두 명 제외
heigh.remove(fake1)
heigh.remove(fake2)

# 오름차순 출력
heigh.sort()
for h in heigh:
    print(h)
