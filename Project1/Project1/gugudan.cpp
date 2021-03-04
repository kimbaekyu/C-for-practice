#include<stdio.h>
int main() {
	int a, i, sum = 0;
	//printf("숫자를입력하세요(1부터9사이의수):");
	scanf("%d", &a);

	for (i = 1; i < 10; i++) {
		sum = a * i;
		printf("%d * %d = %d\n", a, i, sum);
	}

	return 0;
}
