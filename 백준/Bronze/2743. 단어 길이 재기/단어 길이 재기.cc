#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[100];
	int len;
	scanf("%s", arr);
	len = strlen(arr);
	printf("%d", len);
}