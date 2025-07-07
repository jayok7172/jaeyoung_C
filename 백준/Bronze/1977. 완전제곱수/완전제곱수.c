#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int sum = 0;
    int min_square = -1;

    for (int i = 1; i * i <= N; i++) {
        int square = i * i;
        if (square >= M) {
            sum += square;
            if (min_square == -1) {
                min_square = square;
            }
        }
    }
   
    if (min_square == -1) {
        printf("-1\n");
    }
    else {
        printf("%d\n%d\n", sum, min_square);
    }

    return 0;
}