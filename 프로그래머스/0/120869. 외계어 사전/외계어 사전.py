def solution(spell, dic):
    answer = 0
    result =0
    for i in dic:
        for j in spell:
            if j in i:
                result +=1
        if result == len(spell):
            return 1
        else :
            answer = 2
            result =0
    return answer