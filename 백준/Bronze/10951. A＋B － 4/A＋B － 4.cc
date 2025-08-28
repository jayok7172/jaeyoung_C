#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int A, B;
    // 두 개의 정수를 성공적으로 읽었을 때만 루프 진행
    while (scanf("%d %d", &A, &B) == 2) {
        printf("%d\n", A + B);
    }
    return 0; // 입력이 끝나면 종료
}