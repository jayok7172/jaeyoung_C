#include <stdio.h>

int main() {
    int T;  
    scanf("%d", &T);

    while (T--) {
        int P; 
        scanf("%d", &P);

        long long max_price = 0;
        char max_name[21]; 
        for (int i = 0; i < P; i++) {
            long long price;
            char name[21];
            scanf("%lld %s", &price, name);

            if (price > max_price) {
                max_price = price;
                int j = 0;
                while ((max_name[j] = name[j]) != '\0') {
                    j++;
                }
            }
        }

        printf("%s\n", max_name);
    }

    return 0;
}
