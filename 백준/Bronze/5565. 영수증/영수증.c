#include <stdio.h>

int main() {
    int total, sum = 0, price;
    
    scanf("%d", &total); 

    for (int i = 0; i < 9; i++) {
        scanf("%d", &price);
        sum += price; 
    }

    printf("%d\n", total - sum); 

    return 0;
}
