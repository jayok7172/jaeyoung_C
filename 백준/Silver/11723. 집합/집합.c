#include <stdio.h>
#include <string.h>

int ss = 0;

int bit(char ar[], int k);

int main(){
    int n,i,j;
    char arr[10] = {};
    char ar[10];
    int tmp;
    int check = 1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&arr);
        scanf("%d",&tmp);
        bit(arr,tmp);
    }
}

int bit(char ar[], int k){
    if(!strcmp(ar,"add")){
        if((ss & (1<<k)) == 0){
            ss = ss + (1<<k);
        }
    }
    else if(!strcmp(ar,"remove")){
        if((ss & (1<<k)) > 0){
            ss = ss - (1<<k);
        }
    }
    else if(!strcmp(ar,"check")){
        if((ss & (1<<k)) > 0){
            printf("1\n");
        }
        else{
            printf("0\n");
        }

    }
    else if(!strcmp(ar,"toggle")){
        if((ss & (1<<k)) == 0){
            ss = ss + (1<<k);
        }
        else{
            ss = ss - (1<<k);
        }
    }
    else if(!strcmp(ar,"all")){
        ss = (1<<21) - 1;
    }
    else{ // empty
        ss = 0;
    }
    return 0;
}