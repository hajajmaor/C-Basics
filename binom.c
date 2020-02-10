#include <stdio.h>
#include <math.h>
/*
כתוב תוכנית שמממשת את התהליך הבא:
הבינום של ניוטון:
מקבל 3 פרטמרים X Y מקדם



*/
double shortTimes(float x, float y);

double shortTimes(float x, float y) {
	double temp = pow(x, 2);
	temp += (double)2 * x * y;
	temp+= pow(y, 2);
	return temp;
}
void Binom() {
	float x, y;
	int m;
	double sum =1;
	printf("enter x y m: ");
	scanf_s("%f %f %d", &x, &y, &m);
	if (m > 1)
		for (int i = 0; i < m-1; i++)
		{
			sum *= shortTimes(x, y);
		}
	else
		sum = (double)x + y;
	printf("%.3lf", sum);


	printf("\n");
	system("pause");
}