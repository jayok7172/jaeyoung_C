#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct { int x, y; } Point;

int cmp(const void *a, const void *b) {
    const Point *p = (const Point *)a;
    const Point *q = (const Point *)b;
    if (p->y != q->y) return (p->y < q->y) ? -1 : 1;  // y 오름차순
    if (p->x != q->x) return (p->x < q->x) ? -1 : 1;  // y 같으면 x 오름차순
    return 0;
}

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    Point *arr = (Point *)malloc(sizeof(Point) * N);
    if (!arr) return 0;

    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(Point), cmp);

    for (int i = 0; i < N; ++i) {
        printf("%d %d\n", arr[i].x, arr[i].y);
    }

    free(arr);
    return 0;
}