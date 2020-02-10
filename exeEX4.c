#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

void main8() {

	//הצריח מוצב על ריבוע שחור
	int rook_row = 0, rook_col = 0;
	int bishop_row=0, bishop_col=0;
	//סעיף ב
	bool rookVSbishop;
	rookVSbishop = (rook_row == bishop_row || rook_col == bishop_col);
	/*
	if (rook_row==bishop_row || rook_col==bishop_col)
	{
		rookVSbishop = true;
	}
	else
	{
		rookVSbishop = false;
	}
	*/


	//סעיף ג
	bool bishopVSrook;
	/*(bishop_row – rook_row) == (bishop_col – rook_col)
	תומך רק שהרץ נמצא משמאל לצריח.
	אם הוא ימין ומאיים עדיין יצא תוצאה שלילית.
	*/
	int temprow = bishop_row - rook_row;
	int tempcol = bishop_col - rook_col;
	bishopVSrook = (abs(temprow) == abs(tempcol));
} 