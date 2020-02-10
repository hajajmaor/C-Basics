#include <stdio.h>
void main7() {
	int num;
	printf("enter number: ");
	scanf_s("%d", &num);

	int min = 0, max = 0,temp;
	for (int i = 0; i < num; i++) {
		
		printf("enter a number: ");
		scanf_s("%d", &temp);

		if (temp >= max) {
			max = temp;
		}
		else 
			if (temp <= min) {
				min = temp;
			}
	}

	if ((max-min)<=3)
	{
		printf("homogani\n");
	}
	else
	{
		printf("hetrogeni\n");
	}

	system("pause");
}