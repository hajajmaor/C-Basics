#include <stdio.h>
unsigned long merge2(unsigned int a, unsigned int b);
unsigned long reverse2(unsigned int x); 
unsigned int length2(int num);


unsigned long reverse2(unsigned int x){
	long num = 0;
	while (x != 0)
	{
		num *= 10;
		num += x % 10;
		x /= 10;
	}
	return num;
}
unsigned int length2(int num){
	int counter = 0;
	while (num!=0)
	{
		counter++;
		num /= 10;
	}
	return counter;
}
unsigned long merge2(unsigned int a, unsigned int b){
	int countA = length2(a), countB = length2(b);
	a = a * 10 + 1;
	b = b * 10 + 1;
	long reverseNum=0,revA = reverse2(a), revB = reverse2(b);
	while (revA != 0 || revB != 0)
	{
		if (countA > 0)
		{
			if (revA != 0){
				reverseNum *= 10;
				reverseNum += revA % 10;
				countA--;
				revA /= 10;
			}
		}
		else{
			revA = 0;
			//printf("revA ==0\n");
		}
		if (countB > 0)
		{
			if (revB != 0){
				reverseNum *= 10;
				reverseNum += revB % 10;
				countB--;
				revB /= 10;
			}
		}
		else{
			revB = 0;
			//printf("revB ==0\n");
		}
	}
	return reverseNum;
}

void mainReverseNew(){
	printf("%ld\n",merge2(4158,10000));

	system("pause");
}