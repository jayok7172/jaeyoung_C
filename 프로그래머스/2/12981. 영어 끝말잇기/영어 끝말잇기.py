def solution(n, words):
    used = []

    for i in range(len(words)):
        # 1) 이미 나온 단어인지 검사
        if words[i] in used:
            return [i % n + 1, i // n + 1]

        # 2) 이전 단어와 끝말잇기가 되는지 검사
        if i > 0 and words[i-1][-1] != words[i][0]:
            return [i % n + 1, i // n + 1]

        used.append(words[i])

    return [0, 0]