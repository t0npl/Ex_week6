#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b = 1;
	scanf("%d", &a);
	if (a <= 0) {
		if (a == 0) {
			printf("factorial of this number is 0");
		}
		else if (a < 0) {
			printf("Couldn't find factorial of this number");
		}
	}
	else {
		while (a != 0) {
			b *= a;
			a--;
		}
		printf("factorial of this number is %d", b);
	}
	return 0;
}