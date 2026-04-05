def solution(num, total):
    answer = []
    if total % num ==0:
        for i in range(total//num-num//2,total//num-num//2+num):
            answer.append(i)
    else:
        for i in range(total//num-num//2+1,total//num-num//2+1+num):
            answer.append(i)
    return answer