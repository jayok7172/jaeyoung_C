import sys
input = sys.stdin.readline

N = int(input())
meeting = []
for i in range(N):
    x,y = map(int,input().split())
    meeting.append((x,y))
meeting.sort(key = lambda x : (x[1],x[0]))
check = meeting[0][1]
result =1
for i in range(1,len(meeting)):
    if check <= meeting[i][0]:
        check = meeting[i][1]
        result +=1
print(result)