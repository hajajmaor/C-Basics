#include <stdio.h>

void main20(){
	//int num1[]= { 10,20,30,40,50 };
	//int num2[5];
	//int i;
	//for (i = 4; i >= 0; i--) {
	//	num2[4-i]= num1[i];
	//}
	/*int num = 5;

	if (num<1 || num>7)
	{
		printf("error");
	}
	else
	{
		if (num == 1) {
			printf("sunday");
		}
		else
		{
			if (num == 2) {
				printf("Monday");
			}
		}
	}*/

	//for (int i = 0; i <= 10; i=i+2) {
	//	//if(i%2==0)
	//	printf("%d", i);
	//}

	int num, sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &num);
		sum = sum + num;
	}
	printf("avg is:%d", sum / 10);




	system("pause");
}