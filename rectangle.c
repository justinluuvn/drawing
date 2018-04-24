/*
	This file contains the code for gradually drawing a rectangle
*/
#include <stdio.h> //add preprocessors
#include "drawing.h"


/*
	Function definition of rectangle()
	This is to draw a rectangle by first creating the two longer sides and the
	the two shorter ones
	Input argument: none
	Return argument: none
*/
void rectangle(void)
{
	int i, j;
	clearScreen(); //clear the screen
	gotoxy(0,0); //go to the top
	//the following lines are to draw the two longer sides simultaneously
	for(i=0;i<=40;i++)
	{
		gotoxy(1, 1+2*i);
		printf("*");
		gotoxy(31, 81-2*i);
		printf("*");
		delay(DELAY);
	}
	//then the two remaining sides are drawn at the same time
	for(i=0;i<=30;i++)
	{
		gotoxy(31-i, 1);
		printf("*");
		gotoxy(1+i, 81);
		printf("*");
		delay(DELAY);
	}
	printf("\n");
	sleep(5); //wait for five seconds
}
