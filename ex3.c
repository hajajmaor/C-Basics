#include <stdio.h>
void main3()
{
	int num1;
	printf("enter first number: ");
	scanf_s("%d", &num1);

	printf("\nthe digit number is: %d\n",num1%10);

	system("pause");
	return 0;
}