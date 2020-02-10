#include <stdio.h>
void main22() {

	//int arr[] = { 5,9,8,7 };

	int size = 15;

	for (int i =  size; i > 0;i--)
	{
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		for (int j = 0; j <= size - i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	system("pause");
}