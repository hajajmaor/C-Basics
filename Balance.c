#include <stdio.h>
/* כתוב תוכנית שמקבלת מספר

ומחזירה האם המספר הוא BAךANCED
או UNBALANCED



*/

int getFirstNum(long num) {
	if (num >10) {
		countOfDigits(num);
		return (int)getFirstNum(num / 10);
	}
	else
		return (int)num;
}
int countOfDigits(long num) {
	static int counter = 0;
	if (num > 0)
		counter++;
	return counter;
}
void mainBalance() {
	long num;
	int counter = 0;
	int balance = 1,firstnum;
	
	printf("enter number to check: ");
	scanf_s("%ld" ,&num);

	firstnum = getFirstNum(num);

	if ((countOfDigits(0)) != firstnum)//האם כמות המספרים לבדוק גדולה מהמספר?
	{
		balance = 0;
	}
	else 
	{
		long copy = num;
		for (int i = 0; i < countOfDigits(0) - 1; i++)
			if (copy % 10 != firstnum) {
				balance = 0;
				break;
			}
			else
				copy /= 10;

	}
	if (balance == 1)
		printf("the number %ld is Balanced!!!", num);
	else
		printf("the number %ld is UNBalanced", num);
	

	printf("\n");
	system("pause");
}