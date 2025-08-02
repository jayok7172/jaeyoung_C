#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n,a;
    scanf("%d %d",&n,&a);
    int b=a;
    int max=0;
    for(int i=0;i<n-1;i++){
        int p;
        scanf("%d",&p);
        if(p>b){
            b=p;
            if(b-a>max) max=b-a;
        }
        else{
            a=p;
            b=a;
        }
    }
    printf("%d",max);
}