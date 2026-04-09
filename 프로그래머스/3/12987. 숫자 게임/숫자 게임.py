def solution(A, B):
    answer = 0
    A.sort()
    B.sort()
    k = 0
    for i in range(len(B)):
        if A[k] < B[i]:
            answer +=1
            k +=1
            if k ==len(B):
                break
    return answer