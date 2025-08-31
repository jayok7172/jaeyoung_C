#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10001
#define MAXL 501

int cmp_qsort(const void *a, const void *b) {
    const char (*sa)[MAXL] = (const char (*)[MAXL])a;
    const char (*sb)[MAXL] = (const char (*)[MAXL])b;
    return strcmp(*sa, *sb);
}

int cmp_bsearch(const void *key, const void *elem) {
    const char *skey = (const char *)key;
    const char (*selem)[MAXL] = (const char (*)[MAXL])elem;
    return strcmp(skey, *selem);
}

int main(void) {
    int N, M, result = 0;
    scanf("%d %d", &N, &M);

    static char S[MAXN][MAXL]; 
    for (int i = 0; i < N; i++) {
        scanf("%500s", S[i]);
    }

    qsort(S, N, sizeof(S[0]), cmp_qsort);

    for (int i = 0; i < M; i++) {
        char a[MAXL];
        scanf("%500s", a);
        if (bsearch(a, S, N, sizeof(S[0]), cmp_bsearch) != NULL) {
            result++;
        }
    }

    printf("%d\n", result);
    return 0;
}
