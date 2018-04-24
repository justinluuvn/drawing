/*
	This file includes the code for gradually drawing up a circle
*/
#include <stdio.h> //add preprocessors
#include "drawing.h"

/*
	Function definition for 
*/
void circle(void)
{
	clearScreen();
	gotoxy(0,0);
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
	sleep(5);
}
