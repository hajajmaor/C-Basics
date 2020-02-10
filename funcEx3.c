#include <stdio.h>
#include "reverse.h"
unsigned long reverse(unsigned int x) {
	int rev_num = 0;
	while (x>0)
	{
		rev_num =rev_num * 10;
		rev_num =rev_num + x % 10;
		x =x/ 10;
	}
	return rev_num;
}

void main18() {
	int num=65013;
	/*printf("enter num to view reverse: ");
	scanf_s("%d",&num);*/

	printf("reverse number is: %d\n", reverse(num));

	system("pause");
}
