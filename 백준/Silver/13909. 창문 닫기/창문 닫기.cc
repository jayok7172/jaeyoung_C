#include <stdio.h>

int main()
{
    int N;
    int cnt = 0;

    scanf("%d", &N);

    for (int i = 1; i * i <= N; i++)
        cnt++;

    printf("%d", cnt);

    return 0;


}