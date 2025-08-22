#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int a = (x < w - x) ? x : (w - x); 
    int b = (y < h - y) ? y : (h - y); 
    int result = (a < b) ? a : b;

    printf("%d\n", result);
    return 0;
}
