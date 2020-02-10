#include <stdio.h>
#define amount 7

/*
סופר הכל שקר מקבלת הזמנות לפי סדר
מיוחדת מעל 100 שח
מהירה מעל 50
רגילה עד 50 כולל

א. כתוב תוכנית שמקבלת 7 הזמנות ומציגה איזה סוג הזמנה כל אחת
ב. כתוב תוכנית שמקבלת 7 הזמנות ומציגה איזה סוג ללא שימוש בלולאת FOR

*/

void whichOrder(float num) {
	if (num > 100)
		printf("Speciel order");
	else
		if (num > 50)
			printf("Quick Order");
		else
			printf("normal order");
}

void exA() {
	int i;
	float price;
	for (i = 0; i < amount; i++)
	{
		printf("enter price for order no.%d", i + 1);
		scanf_s("%f", &price);
		whichOrder(price);
	}
}


void exB(){
	int i=0;
	float price;
	//for (i = 0; i < amount; i++)

	do
	{
		printf("enter price for order no.%d", i + 1);
		scanf_s("%f", &price);
		whichOrder(price);
		i++;
	} while (i < 7);
}


void Super7Orders(){

	printf("\n");
	system("pause");
}