#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MOD 1000000009
int dp[1000001];

int main() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= 1000000; i++) {
        dp[i] = ((long long)dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}
