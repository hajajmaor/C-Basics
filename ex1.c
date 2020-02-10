
#include <stdio.h>

void main1() {
	int num1,num2;
	printf("enter first number: ");
	scanf_s("%d", &num1);

	printf("\nenter second number: ");
	scanf_s("%d", &num2);
	
	int temp = num1;
	num1 = num2;
	num2 = temp;

	printf("\nthe new numbers:num1: %d, num2: %d \n", num1, num2);
	system("pause");
	//return 0;
}

