#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c) {
		printf("%d is the highest number", a);
	}
	else if (b > c && b > a) {
		printf("%d is the highest number", b);
	}
	else if (c > b && c > a) {
		printf("%d is the highest number", c);
	}
	else if (a == b && a > c) {
		printf("%d is the highest number", a);
	}
	else if (b == c && b > a) {
		printf("%d is the highest number", b);
	}
	else if (a == c && a > b) {
		printf("%d is the highest number", a);
	}
	else {
		printf("%d is the highest number", a);
	}
	return 0;
}