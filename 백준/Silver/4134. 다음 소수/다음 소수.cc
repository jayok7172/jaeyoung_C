#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long prime(long long a) {
    if (a <= 1) return 2;   
    while (1) {
        int cnt = 0;
        for (long long i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                cnt++;
                break;
            }
        }
        if (cnt != 0) a++;
        else return a;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        long long N;
        scanf("%lld", &N);
        printf("%lld\n", prime(N));
    }
}
