import sys
input = sys.stdin.readline

N = int(input())
meeting = []
for i in range(N):
    x,y = map(int, input().split())
    meeting.append((x,y))
meeting.sort(key =lambda x:(x[1],x[0]))

room = 1
check = meeting[0][1]
for i in range(1,N):
    if meeting[i][0]>=check:
        check = meeting[i][1]
        room+=1
print(room)        

