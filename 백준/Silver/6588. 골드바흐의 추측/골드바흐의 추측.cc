#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 1000000
char prime[MAXN + 1];

void sieve(void) {
    for (int i = 2; i <= MAXN; ++i) prime[i] = 1;
    for (int i = 2; i * i <= MAXN; ++i) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i)
                prime[j] = 0;
        }
    }
}

int main(void) {
    sieve();

    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        int found = 0;
        for (int a = 3; a <= N - a; a += 2) {
            if (prime[a] && prime[N - a]) {
                printf("%d = %d + %d\n", N, a, N - a);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
