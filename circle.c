/*
	This file includes the code for gradually drawing up a circle
*/
#include <stdio.h> //add preprocessors
#include "drawing.h"

/*
	Function definition for circle()
	This is to draw a circle by adding "*" consecutively
	Input argument: none
	Return argument: none
*/
void circle(void)
{
	clearScreen(); //clear the screen
	gotoxy(0,0); //go to the top
	//The following lines lay out the circling shape, each followed by a delay
	printf("              *    *                \n");
	delay(3*DELAY);
	printf("          *            *            \n");
	delay(3*DELAY);
	printf("       *                  *         \n");
	delay(3*DELAY);
	printf("     *                      *       \n");
	delay(3*DELAY);
	printf("    *                        *      \n");
	delay(3*DELAY);
	printf("    *                        *      \n");
	delay(3*DELAY);
	printf("     *                      *       \n");
	delay(3*DELAY);
	printf("       *                  *         \n");
	delay(3*DELAY);
	printf("          *            *            \n");
	delay(3*DELAY);
	printf("              *    *                \n");
	sleep(5); //wait for 5 seconds
}
