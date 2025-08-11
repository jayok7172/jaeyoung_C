#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sw[101]; 
    for (int i = 1; i <= n; i++) {
        scanf("%d", &sw[i]);
    }

    int students; 
    scanf("%d", &students);

    for (int i = 0; i < students; i++) {
        int gender, num;
        scanf("%d %d", &gender, &num);

        if (gender == 1) { 
            for (int j = num; j <= n; j += num) {
                sw[j] = 1 - sw[j];
            }
        } 
        else {
            int left = num, right = num;
            while (left > 1 && right < n && sw[left - 1] == sw[right + 1]) {
                left--;
                right++;
            }
            for (int j = left; j <= right; j++) {
                sw[j] = 1 - sw[j];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", sw[i]);
        if (i % 20 == 0) printf("\n");
    }
    return 0;
}
