#include <stdio.h>

int main(void) {
    int n, c = 1;
    long long num = 1;


    while (~scanf("%d", &n)) { 
        num = 1;
        c = 1;
        while (1) {
            if (num % n != 0) {
                num = (num % n) * 10 + 1; 
                c++;
            }
            else {
                printf("%d\n", c);
                break;
            }
        }
    }
    return 0;
}