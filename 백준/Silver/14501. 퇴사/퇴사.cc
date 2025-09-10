#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    int T[20], P[20];
    int dp[20] = {0};

    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &T[i], &P[i]);
    }
    for (int i = N; i >= 1; i--) {
        int next = i + T[i]; 
        if (next <= N + 1) {
            int take = P[i] + dp[next];
            int skip = dp[i + 1];
            dp[i] = (take > skip) ? take : skip;
        } else {
            dp[i] = dp[i + 1];
        }
    }

    printf("%d\n", dp[1]);
    return 0;
}
