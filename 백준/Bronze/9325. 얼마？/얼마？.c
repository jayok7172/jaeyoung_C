#include <stdio.h>
int main() {
	int count,sum=0;
	scanf("%d", &count);
	for (int a = 0; a < count; a++) {
		int s,n;
		scanf("%d", &s);
		sum += s;
		scanf("%d", &n);
		for (int b = 0; b < n; b++) {
			int p, q;
			scanf("%d %d", &p, &q);
			sum += p * q;
		}
		printf("%d\n", sum);
		sum = 0;
	}return 0;
}