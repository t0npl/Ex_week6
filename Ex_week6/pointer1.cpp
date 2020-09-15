#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char a[100];
	char* p;
	scanf("%s", a);
	p = a;
	while (*p != '\0') {
		if (*p >= 65 && *p <= 90) {
			printf("%c", *p - 65 + 97);
		}
		else if (*p >= 97 && *p <= 122) {
			printf("%c", *p - 97 + 65);
		}
		p++;
	}
	return 0;
}