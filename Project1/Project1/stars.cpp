#include<stdio.h>
int main() {
	int i, j, n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
		j = 1;
	}

	return 0;
}