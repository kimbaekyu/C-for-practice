#include <stdio.h>
int main() {
	int i, n, x, j;
	scanf("%d %d", &n, &x);
	int array[10000];
	for (i = 0; i < n; i++) {
		scanf("%d", &array[i]);

	}
	for (j = 0; j < n; j++) {
		if (array[j] < x)
			printf("%d ", array[j]);
	}

	return 0;

}