#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char a[81], b[81];
    int result[100];
    int i, j, idx = 0;
    int carry = 0, sum;

    scanf("%s %s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    i = lenA - 1;
    j = lenB - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int bitA = (i >= 0) ? a[i--] - '0' : 0;
        int bitB = (j >= 0) ? b[j--] - '0' : 0;
        sum = bitA + bitB + carry;
        result[idx++] = sum % 2;
        carry = sum / 2;
    }


    while (idx > 1 && result[idx - 1] == 0) {
        idx--;
    }


    for (int k = idx - 1; k >= 0; k--) {
        printf("%d", result[k]);
    }
    printf("\n");

    return 0;
}
