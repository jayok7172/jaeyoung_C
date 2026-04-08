from itertools import combinations

def solution(line):
    points = []

    # 1. 모든 직선 쌍에 대해 교점 계산
    for (A, B, E), (C, D, F) in combinations(line, 2):
        den = A * D - B * C

        # 평행 또는 일치
        if den == 0:
            continue

        x_num = B * F - E * D
        y_num = E * C - A * F

        # 정수 좌표인지 확인
        if x_num % den == 0 and y_num % den == 0:
            x = x_num // den
            y = y_num // den
            points.append((x, y))

    # 2. 최소/최대 좌표 구하기
    min_x = min(x for x, y in points)
    max_x = max(x for x, y in points)
    min_y = min(y for x, y in points)
    max_y = max(y for x, y in points)

    # 3. 격자판 만들기
    width = max_x - min_x + 1
    height = max_y - min_y + 1
    board = [['.' for _ in range(width)] for _ in range(height)]

    # 4. 별 찍기
    for x, y in points:
        row = max_y - y
        col = x - min_x
        board[row][col] = '*'

    # 5. 문자열로 변환
    return [''.join(row) for row in board]