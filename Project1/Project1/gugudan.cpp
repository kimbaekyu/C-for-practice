#include<stdio.h>
int main() {
	int a, i, sum = 0;
	//printf("���ڸ��Է��ϼ���(1����9�����Ǽ�):");
	scanf("%d", &a);

	for (i = 1; i < 10; i++) {
		sum = a * i;
		printf("%d * %d = %d\n", a, i, sum);
	}

	return 0;
}
