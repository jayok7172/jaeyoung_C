#include <stdio.h>

int main(void) 
{
    long long int A, B;
    long long int ans;

    scanf("%lld %lld", &A, &B);

    long long int mul = A*B;

    while(1) {
        if (B == 0) {
            printf("%lld", mul/A); 
            break;
        }
        else {
            ans = A % B;
            A = B;
            B = ans;
        } 

    }

    return 0;
}