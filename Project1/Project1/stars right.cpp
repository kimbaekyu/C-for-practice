#include<stdio.h>
int main() {
	int n, i, j, k, sum = 0;
	scanf("%d", &n);

	for (k = 1; k <= n; k++) {
		sum = n - k;
		for (j = 0; j < sum; j++) {
			printf(" ");
		}
		for (i = 0; i < k; i++) {
			printf("*");
		}

		printf("\n");
		i = 0, j = 0;
	}
	return 0;
}