#include <stdio.h>
#include "reverse.h"

unsigned long merge(unsigned int a, unsigned int b) {
	int rev_a = reverse(a), rev_b = reverse(b);
	int temp = 0;
	while (rev_a >0 || rev_b >0)
	{
		if (rev_a >0)
		{
			temp *= 10;
			temp += rev_a % 10;
			rev_a /= 10;
		}
		if (rev_b > 0)
		{
			temp *= 10;
			temp += rev_b % 10;
			rev_b /= 10;
		}
	}
	return temp;
}


void main13() {
	int a = 27, b = 1009;
	unsigned long result = merge(a, b);
	printf("num is: %lu\n",result);

	system("pause");
}