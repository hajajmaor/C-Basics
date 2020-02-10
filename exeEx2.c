#include <stdio.h>
void main6() {
	int num1 = 0, num2 = 0;
	printf("enter 2 numbers: ");
	scanf_s("%d %d", &num1, &num2);
	int min, max;
	if (num1<=num2)
	{
		min = num1;
		max = num2;
	}
	else
	{
		min = num2;
		max = num1;
	}
	//num1 = NULL, num2 = NULL;
	int sum = 0;
	for (int i = min; i <= max; i++)
	{
		sum += i;
	}
	//min = NULL, max = NULL;
	printf("\nsum is: %d\n", sum);
	system("pause");
}