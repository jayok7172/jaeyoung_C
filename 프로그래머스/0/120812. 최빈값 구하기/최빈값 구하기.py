def solution(array):
    a = [0] * (max(array)+1)
    answer = 0
    for i in array:
        a[i] +=1
    m =0
    for j in a:
        if j == max(a):
            m +=1
    if m==1:
        answer = a.index(max(a))
    else:
        answer = -1
    return answer