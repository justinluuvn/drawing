/*
	This file contains the code for gradually drawing up a square
*/
#include <stdio.h> //add preprocessors
#include "drawing.h"

/*
	Function definition of square()
	This is to draw the square by expanding from the center of each side of the square
	Input argument: none
	Return argument: none
*/
void square(void)
{
	int i, j;
	clearScreen(); //clear the screen
	//the following lines set up the square by adding "*" to form the four sides simultaneously
	for(i=0; i<=15; i++)
	{
		//a total of eight "*" is created each loop cycle
		gotoxy(15-i, 1);
		printf("*");
		gotoxy(15+i, 1);
        printf("*");
		gotoxy(15-i, 61);
        printf("*");
		gotoxy(15+i, 61);
        printf("*");
        gotoxy(1, 31-2*i);
		printf("*");
		gotoxy(1, 31+2*i);
        printf("*");
		gotoxy(31, 31-2*i);
        printf("*");
		gotoxy(31, 31+2*i);
        printf("*");
		delay(DELAY); //wait for a while
	}
	printf("\n");
	sleep(5); //wait for five seconds
}
