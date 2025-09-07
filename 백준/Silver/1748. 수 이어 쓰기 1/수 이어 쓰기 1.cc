#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long long N;
    scanf("%lld", &N);

    long long result = 0;
    long long start = 1; 
    int len = 1;        

    while (start * 10 <= N) {
        result += (start * 10 - start) * (long long)len; 
        start *= 10;
        len++;
    }
    result += (N - start + 1) * (long long)len;

    printf("%lld", result);
    return 0;
}