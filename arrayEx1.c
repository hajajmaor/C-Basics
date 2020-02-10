#include <stdio.h>
#define amount 5
void main19() {
/*	לקלוט 5 מספרים
א. ומדפיסה את ממוצע המספרים

ב. החלף את המספר במקום הרביעי, עם המספר במקום השני,
אם סכומם גדול מ7, החלף את כל המספרים שנשמרו בספרה 0
*/
	//סעיף א
	double sum = 0;
	int nums [amount];
	int i;
	for ( i = 0; i < amount; i++) {
		printf("enter number: ");
		scanf_s("%d", &nums[i]);
		sum = sum+nums[i];
	}
	sum /= amount;
	printf("sum is: %.2lf \n", sum);


	//סעיף ב
	if (nums[2] + nums[4] > 7) {
		for ( i = 0; i < amount; i++)
			nums[i] = 0;
	}
	else {
		int temp = nums[2];
		nums[2] = nums[4];
		nums[4] = temp;
		
		printf("the new array is: \n");
	}
	for (i = 0; i < amount; i++) 
		printf("nums[%d]= %d\n", i, nums[i]);
	system("pause");
}