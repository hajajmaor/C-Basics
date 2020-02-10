#include <stdio.h>
void main4()
{
	int num1;
	printf("enter a number: ");
	scanf_s("%d", &num1);

	if (num1%2==0)
	{
		printf("\n0");
	}
	else
	{
		printf("\n1");
	}
	printf("\n");
	system("pause");
	return 0;
}