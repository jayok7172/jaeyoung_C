def solution(dirs):
    x, y = 0, 0
    visited = set()

    for d in dirs:
        nx, ny = x, y

        if d == 'U':
            ny += 1
        elif d == 'D':
            ny -= 1
        elif d == 'R':
            nx += 1
        elif d == 'L':
            nx -= 1

        # 범위 체크
        if -5 <= nx <= 5 and -5 <= ny <= 5:
            # 양방향 저장 (tuple로)
            visited.add(((x, y), (nx, ny)))
            visited.add(((nx, ny), (x, y)))

            x, y = nx, ny

    return len(visited) // 2