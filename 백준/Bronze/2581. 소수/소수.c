#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int M, N;
    scanf("%d %d", &M, &N);

    int sum = 0;
    int min_prime = -1;

    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            sum += i;
            if (min_prime == -1) min_prime = i;
        }
    }

    if (min_prime == -1) {
        printf("-1\n");
    } else {
        printf("%d\n%d\n", sum, min_prime);
    }
    return 0;
}
