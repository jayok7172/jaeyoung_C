#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char* S = (char*)malloc(sizeof(char) * 100);
	scanf("%s", S);
	int len = (int)strlen(S);
	int cnt = 0;
	for (int i = 0; i < len / 2; i++) {
		if (S[i] == S[len - i - 1]) {
			cnt++;
		}
		else break;
	}
	if (cnt == len/2) printf("1");
	else printf("0");
	free(S);
}