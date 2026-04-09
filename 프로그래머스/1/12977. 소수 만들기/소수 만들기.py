from itertools import combinations

def solution(nums):
    answer = 0
    for i in combinations(nums,3):
        s= sum(i)
        a = True
        for j in range(2,int(s**0.5)+1):
            if s % j ==0:
                a = False
                break
        if a == True :
            answer +=1
        else:
            pass
    return answer