#include <stdio.h>
//#include <math.h> //מודול המשמש לפעולות מתמטיות

int sumOfNum(int num) {
	int sum = 0;
	while (num>0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

void main9() {
	int left, right;
	printf("please enter 2 numbers: ");
	scanf_s("%d %d", &left, &right);
	
	int num = left + 1;
	int maxSum = sumOfNum(num);
	int maxNum = left;
	int temp;
	while (num<right)
	{
		temp = sumOfNum(num);
		if (temp >=maxSum)
		{
			maxSum=temp;
			maxNum = num;
		}
		num++;
	}

	printf("%d is the biggest num.\n" ,maxNum);
	system("pause");
}