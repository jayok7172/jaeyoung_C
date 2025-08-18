#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int prev, cur;
	scanf("%d", &prev);
	int gain = 0;
	int best = 0;

	for (int i = 1; i < N; i++) {
		scanf("%d", &cur);
		if (cur > prev) {
			gain += (cur - prev);
		}
		else {
			if (gain > best) {
				best = gain;
			}
            gain = 0;
		}
		prev = cur;
	}
	if (gain > best) best = gain;
	printf("%d", best);
}