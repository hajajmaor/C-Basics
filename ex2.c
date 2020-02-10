#include <stdio.h>
void main2()
{
	int num1, num2;
	printf("enter first number: ");
	scanf_s("%d", &num1);

	printf("\nenter second number: ");
	scanf_s("%d", &num2);

	float avg = (num1 + num2);
	avg = avg / 2;
	printf("\nthe avg is: %0.2f \n", avg);

	system("pause");
	//return 0;
}