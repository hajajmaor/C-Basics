#include <stdio.h>

void printDate(int num);

void printDate(int num) {
	//XX.XX.XXXX
	int year=0, month=0, day=0;
	int i;
	year = num % 10000;
	num = num / 10000;
	month = num % 100;
	num /= 100;
	day = num % 100;
	//num /= 100;
	printf("the year is:%d\nthe Month is:%02d\nthe day is:%02d", year, month, day);
}

void mainDate() {
	printDate(13062020);

	printf("\n");
	system("pause");
}