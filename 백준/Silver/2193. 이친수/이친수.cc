#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long dp[91];  // N ≤ 90

int main() {
    int N;
    scanf("%d", &N);
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= N; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    printf("%lld\n", dp[N]);
    return 0;
}
