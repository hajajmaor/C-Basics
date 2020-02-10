#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define size 12
//void ffff() {
//	int num[size],i=0,temp;
//	int sum = 0;
//	for (i = 0; i < size; i++)
//	{
//		do {
//			printf("enter an even, one digit number: ");
//			scanf_s("%d", &temp);
//		} while ((temp % 2 == 0) && (temp / 10 == 0));
//		num[i] = temp;
//		sum = sum + temp;
//	}
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0; j < size-1; j++) {
//			if (num[j] < num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//}

void evenOneDigit() {

	int nums[6] = { 0 };
	int j, temp, sum = 0;
	int num;

	for (int i = 0; i < 6; i++)
	{
		printf("enter a number:\n");
		scanf_s("%d", &num);

		while (num % 2 != 0 || num >= 10 || num<= -10)
		{
			printf("Enter even, one digit, number:\n");
			scanf_s("%d", &num);
		}
		nums[i] = num;
		sum = sum + nums[i];
	}
}

void scan_array(int arr[]) {
	printf("enter %d numbers: \n",size);
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
}

int array_Sum(int arr[]) {
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}

void print_Array(int arr[], int sum) {
	printf("sum is: %d, Array Values: \n",sum);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void ThreearraysSumbigger() {
	int arr1[size], arr2[size], arr3[size];
	scan_array(arr1);
	scan_array(arr2);
	scan_array(arr3);
	int sum1 = array_Sum(arr1),
		sum2 = array_Sum(arr2),
		sum3 = array_Sum(arr3);

	if (sum1 > sum2&& sum1 > sum3)
		print_Array(arr1, sum1);
	else
		if (sum2 > sum1&& sum2 > sum3)
			print_Array(arr2, sum2);
		else
			if (sum3 > sum1&& sum3 > sum2)
				print_Array(arr3, sum3);
			else
				printf("no array has the biggest sum\n");

	system("pause");
}

void rangeInArray() {
	//const int size=12;
	int arr[size] = { 0,0,1,0,1,0,1,0,0,1,1,0 };
	int sum = 0;
	for (int i = 0; i < size-1 ; i++) //רץ על גודל המערך פחות 1 כי עושים בדיקה על אינדקס+1
	{
		if (arr[i] == arr[i + 1]) { //אם שווים
			if (sum >= 2) {//בודקים את ערך הסוכם, אם הוא 0, תחילת רצף או לא
				sum++;
			}
			else //אם זה תחילת רצף האורך בינתיים הוא 2
			{
				sum = 2;
			}
		}
		else // אם המספר באינדקס I וI+1 שונים
		{
			if (sum > 0) { // אם עד לרגע זה היה לי רצף, אדפיס את התו ואת הכמות ברצף, ואאתחל את המונה
				printf("the number %d appears in sequence of %d times.\n",arr[i],sum);
				sum = 0;
			}
		}
	}
	if (sum > 0) {// במידה והתו האחרון גם ברצף, הלולאה תצא ולא תעשה בדיקה אחרונה, אז עושים בדיקה שוב.
		printf("the number %d appears in sequence of %d times.\n", arr[size-1], sum);
		//sum = 0;
	}
	system("pause");
}

double sectionDistance(double num1, double num2) {
	return (pow((num1 - num2), 2));
}
double distance(double x1, double x2, double y1, double y2) {
	double first = sectionDistance(x2, x1);
	double second = sectionDistance(y2, y1);
	double temp = first + second;
	//printf("temp= %lf\n", temp);
	return sqrt(temp);
}


void distanceCalc() {
	double x1, x2, y1, y2;
	printf("enter x1, x2, y1, y2:\n");
	scanf_s("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
	//printf("%lf %lf %lf %lf", x1, x2, y1, y2);
	printf("distance is %.3lf cm.", distance(x1, x2, y1, y2));
}
void distanceCalcmain() {
	distanceCalc();

	printf("\n");
	system("pause");
}
