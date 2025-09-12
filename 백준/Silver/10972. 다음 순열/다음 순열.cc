#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int a[100000]; // N ≤ 100000 가정해 넉넉히
    for (int i = 0; i < N; i++) scanf("%d", &a[i]);

    // 1) 뒤에서부터 증가 전환점 i-1 찾기 (a[i-1] < a[i])
    int i = N - 1;
    while (i > 0 && a[i - 1] >= a[i]) i--;

    if (i == 0) {
        // 마지막 순열(내림차순)이면 -1
        puts("-1");
        return 0;
    }

    // 2) 뒤에서부터 a[i-1]보다 큰 첫 원소 j 찾기
    int j = N - 1;
    while (a[j] <= a[i - 1]) j--;

    // 3) a[i-1]와 a[j] 스왑
    swap(&a[i - 1], &a[j]);

    // 4) suffix a[i..N-1] 오름차순이 되도록 반전(현재는 내림차순)
    int l = i, r = N - 1;
    while (l < r) swap(&a[l++], &a[r--]);

    // 출력
    for (int k = 0; k < N; k++) {
        if (k) putchar(' ');
        printf("%d", a[k]);
    }
    putchar('\n');
    return 0;
}
