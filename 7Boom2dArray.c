#include <stdio.h>
#define SIZE 4

void main() {
	int twoDArray[SIZE][SIZE] = { 
	{2,4,5,7},
	{9,10,12,14},
	{13,14,7,8},
	{7,8,5,3} 
	};
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			if (twoDArray[i][j] == 7)
			{
				printf("found 7 in index: (i=%d j=%d)\n", i, j);
			}
		}
	}
	printf("\n");
	system("pause");
}