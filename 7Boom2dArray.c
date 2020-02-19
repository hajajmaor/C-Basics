#include <stdio.h>
#define SIZE 4

void fillArray(int arr[SIZE]);
/*
char twoDArrayWithAstrix(int , int );

char twoDArrayWithAstrix(int i, int j) {
	static char astrixs[SIZE][SIZE];
	if (i==-1 || j==-1)
	{
		return astrixs;
	}
	astrixs[i][j] = '*';
	return astrixs;
}
*/
void fillArray(int arr[SIZE]) {
	printf("enter 4 numbers:");
	for (int i = 0; i < SIZE; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n");
}

void main() {
	int twoDArray[SIZE][SIZE] = { 0 };
	/*
	{ 
	{2,4,5,7},
	{9,10,12,14},
	{13,14,7,8},
	{7,8,5,3} 
	};
	*/
	
	for (int i = 0; i < SIZE; i++)
	{
		fillArray(twoDArray[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			if (twoDArray[i][j] == 7)
			{
				//printf("found 7 in index: (i=%d j=%d)\n", i, j);
				//twoDArrayWithAstrix(i, j);
				printf(" * ");
			}
			else {
				printf(" 0 ");
			}
		}
		printf("\n");
	}

	printf("\n");
	system("pause");
}