#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void push(int x);
void pop(void);
void size(void);
void empty(void);
void top(void);

int stack[100000];
int cnt = 0;   // 현재 원소 개수

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char a[6];              // "empty" + '\0' 까지 딱 맞음
        scanf("%s", a);

        if (strcmp(a, "push") == 0) {
            int x; scanf("%d", &x);
            push(x);
        } else if (strcmp(a, "pop") == 0) {
            pop();
        } else if (strcmp(a, "size") == 0) {
            size();
        } else if (strcmp(a, "empty") == 0) {
            empty();
        } else if (strcmp(a, "top") == 0) {
            top();
        }
    }
    return 0;
}

void push(int x) { stack[cnt++] = x; }

void pop(void) {
    if (cnt == 0) printf("-1\n");
    else          printf("%d\n", stack[--cnt]); // cnt를 줄인 뒤 그 칸 출력
}

void size(void)  { printf("%d\n", cnt); }

void empty(void) { printf("%d\n", (cnt == 0) ? 1 : 0); }

void top(void) {
    if (cnt == 0) printf("-1\n");
    else          printf("%d\n", stack[cnt - 1]);
}
