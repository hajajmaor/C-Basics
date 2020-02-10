#include <stdio.h>
#include <math.h>
#define size 3
float getShipoah(int x1, int y1, int x2, int y2);
int is90Deg(float angle1, float angle2);
void isTriangle();


void isTriangle() {
	int cord[size][2];
	int isTrian = 0;
	for (int i = 0; i < size; i++)
	{
		printf("enter %d dot cordinate in format x y :",i+1);
		scanf_s("%d %d", &cord[i][0], &cord[i][1]);
	}

	float shipoah[size];
	shipoah[0] = getShipoah(cord[0][0], cord[0][1], cord[1][0], cord[1][1]);
	shipoah[1] = getShipoah(cord[0][0], cord[0][1], cord[2][0], cord[2][1]);
	shipoah[2] = getShipoah(cord[1][0], cord[1][1], cord[2][0], cord[2][1]);
	for (int i = 0; i < size; i++)
	{
		shipoah[i] = floorf(shipoah[i] * 100) / 100;
	}
	if (is90Deg(shipoah[0], shipoah[1]) == 1)
		isTrian = 1;
	else
		if (is90Deg(shipoah[0], shipoah[2]) == 1)
			isTrian = 1;
		else
			if (is90Deg(shipoah[1], shipoah[2]) == 1)
				isTrian = 1;
	if (isTrian == 1)
		printf("90 Degree Triangle");
	else
		printf("not 90 degree Triangle");
}

float getShipoah(int x1, int y1, int x2, int y2) {
	if (x2 - x1 == 0)
		return 0;
	return (float)(y2 - y1) / (x2 - x1);
}	

int is90Deg(float angle1, float angle2) {
	if (angle1 * angle2 == -1) {
		return 1;
	}
	return 0;
}


void DotsTriangle() {
	isTriangle();

	printf("\n");
	system("pause");
}


