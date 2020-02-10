#include <stdio.h>
#define SIZE 5
void main24() {
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		printf("enter number: ");
		scanf_s("%d", &arr[i]);
	}

	int maxIndex=0;
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] > arr[maxIndex])
		{
			maxIndex = i;
		}
	}
	printf("the number is: %d, index is: %d\n",arr[maxIndex],maxIndex+1);
	system("pause");
}