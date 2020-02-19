#include <stdio.h>
#define SIZE 5
void isArrayPolindrom(int num[SIZE]) {
	//int num[SIZE] = { 1,2,3,2,1 };
	int i, isPolindrom = 1;
	for (i = 0; i < SIZE/2; i++)
	{
		if (num[i]!=num[SIZE-1-i])
		{
			isPolindrom = 0;
			break;
		}
	}
	if (isPolindrom)
	{
		printf("is Polindrom");
	}
	else
	{
		printf("NOT a polindrom");
	}
}
void mainPolindrom() {
	int num[SIZE];
	printf("enter %d digit number:\n", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &num[i]);
	}
	isArrayPolindrom(num);
	printf("\n");
	system("pause");
}