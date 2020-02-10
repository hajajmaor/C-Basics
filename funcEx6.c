#include <stdio.h>
#include <stdbool.h>
	
bool doRequired(int num) {
	int temp=num;
	int right_num=0;
	right_num += (num % 10) * 10;
	num /= 10; 
	right_num += (num % 10);
	num /= 10;
	int left_num=0;
	left_num += (num % 10) * 10;
	num /= 10;
	left_num += (num % 10);

	int sum = left_num + right_num;
	int temp2 = sum * sum;
	if (temp2== temp) {
		return true;
	}
	return false;
}

void main16() {
	for (int i = 1000; i < 10000; i++) {
		if (doRequired(i)==true)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
}