#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[1000002];          
    int cnt[10] = {0};
    int i, mx = 0;

    if (scanf("%1000001s", s) != 1) return 0;

    for (i = 0; s[i]; ++i) {
        cnt[s[i] - '0']++;
    }

   
    int sixnine = cnt[6] + cnt[9];
    cnt[6] = (sixnine + 1) / 2; 
    cnt[9] = 0;                

 
    for (i = 0; i < 10; ++i) if (cnt[i] > mx) mx = cnt[i];

    printf("%d\n", mx);
    return 0;
}
