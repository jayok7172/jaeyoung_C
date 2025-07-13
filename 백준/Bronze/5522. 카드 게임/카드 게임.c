#include <stdio.h>

int main()
{
    int i,A=0;
    int sum=0;
    for(i=1;i<=5;i++){
        scanf("%d", &A);
        sum+=A;
    }
    printf("%d", sum);
    return 0;
}