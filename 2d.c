#include <stdio.h>
void main25() {
	int arr[10] [10];
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++) {
			printf("%d,", i * j);
			arr[i - 1][j - 1] = i * j;
		}
		printf("\n");
	}

	system("pause");
}