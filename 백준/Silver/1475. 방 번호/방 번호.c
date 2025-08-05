#include <stdio.h>
#include <string.h>
#define MAX(a,b) a>b?a:b
 
char N[1000001];
int main() {
    int set = 0, num[10] = { 0 };
    scanf("%s", N);
    for (int i = 0; i < strlen(N); i++)
        num[N[i] - '0']++;
 
    for (int i = 0; i < 10; i++) 
        if (i != 6 && i != 9)     set = MAX(num[i], set);
 
    set = MAX((num[6] + num[9] + 1) / 2, set);
 
    printf("%d\n", set);
    return 0;
}
