def solution(cookie):
    n = len(cookie)
    answer = 0

    # 모든 경계(i | i+1)를 확인
    for i in range(n - 1):
        left = i
        right = i + 1

        left_sum = cookie[left]
        right_sum = cookie[right]

        while True:
            # 합이 같으면 정답 후보
            if left_sum == right_sum:
                answer = max(answer, left_sum)

            # 더 작은 쪽을 확장
            if left_sum <= right_sum:
                if left == 0:
                    break
                left -= 1
                left_sum += cookie[left]
            else:
                if right == n - 1:
                    break
                right += 1
                right_sum += cookie[right]

    return answer