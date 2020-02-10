#include "reverse.h"
#include <stdio.h>

void main17() {
	for (int i = 10000; i < 100000; i++) {
		if (i == reverse(i * 4)) {
			printf("%d\n", i);
		}
	}
	system("pause");
}
