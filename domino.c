#include <stdio.h>
#define Amount 5
#define Pair 2
void getPairs(int pair[Amount][Pair]) {
	int index[Amount] = { -1 };
	int indexFromPair[Amount] = { -1 };
	int indexLast = 0;
	char domino[Amount] = { 'A','B','C','D','E' };
	int i, j, k, n;
	int found;
	for (i = 0; i < Amount; i++)//ריצה איבר איבר במערך
	{
		if (indexLast>=Amount-1)
			break;
		found = 0;
		for (j = 0; j < Amount; j++) {//ריצה על 2 המספרים
			if (i == index[j]) {
				found = 1;
				break;
			}

		}
		if (found == 0) {//אם המספר לא נמצא כבר בשיוך
			for (j = 0; j < Pair; j++) {

				for (k = 0; k < Amount; k++)
				{
					if (k == i)
						continue;
					else {
						for (n = 0; n < Pair; n++) {
							if (pair[i][j] == pair[k][n]) {
								index[indexLast] = i;
								indexFromPair[indexLast] = j;
								index[indexLast++] = k;
								indexFromPair[indexLast] = n;
								printf("pair is %c%d : %c%d\n", domino[indexLast - 1],
									j, domino[indexLast], n);
								indexLast++;
								break;
							}
						}
					}
				}
			}
		}
	}
	for (i = 0; i < Amount; i++) {
		found = 0;
		for (j = 0; j < Amount; j++)
		{
			if (index[i] == j) {
				break;
				found = 1;
			}
		}
		if (found == 0) {
			printf("alone piece: %d,%d\n", pair[i][0], pair[i][1]);
		}
	}
}
void dominoMain() {
	const int pair[Amount][Pair] = { {5,2},{4,1},{4,2},{3,3},{4,3} };
	getPairs(pair);


	printf("\n");
	system("pause");
}