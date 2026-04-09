import math
def solution(n, stations, w):
    answer = 0
    blank=[]
    for i in range(len(stations)-1):
        blank.append(stations[i+1]-stations[i]-1-2*w)
    blank.append(stations[0]-w-1)
    blank.append(n-stations[-1]-w)
    for i in blank:
        if i >0:
            answer += math.ceil(i / (2*w+1))

    return answer