#include<stdio.h>
#include<string.h>
void push(int a);
int empty();
void pop();
void top();
int stack[10001];
int cnt = 0;
int main() {
	int n;
	scanf("%d", &n);

	while (n--) {
		char ch[10];
		scanf("%s", ch);

		if (strcmp(ch, "push") == 0) {
			int a;
			scanf("%d", &a);
			push(a);
		}
		else if (strcmp(ch, "empty") == 0) {
			printf("%d\n", empty());
		}
		else if (strcmp(ch, "pop") == 0) {
			if (empty())
				printf("-1\n");
			else pop();
		}
		else if (strcmp(ch, "top") == 0) {
			if (empty())
				printf("-1\n");
			else top();
		}
		else if (strcmp(ch, "size") == 0) {
			printf("%d\n", cnt);
		}
	}

	
	return 0;
}
void push(int a) {
	stack[cnt++] = a;
}
int empty() {
	if (cnt == 0)
		return 1;
	else return 0;
}
void pop() {
	cnt--;
	printf("%d\n", stack[cnt]);
	stack[cnt] = 0;
}
void top() {
	printf("%d\n", stack[cnt - 1]);
}