#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int seen[42] = { 0 };   
    for (int i = 0; i < 10; i++) {
        int x;
        scanf("%d", &x);
        seen[x % 42] = 1; 
    }
    int cnt = 0;
    for (int r = 0; r < 42; r++) cnt += seen[r];
    printf("%d\n", cnt);
    return 0;
}