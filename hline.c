/*
	This file contains the code for drawing a straight horizontal line
*/
#include <stdio.h> //add preprocessors
#include "drawing.h"

/*
	Function definition of hLine()
	This function aims at drawing a series of "*" characters from the left to the right to create a straight line
	Input argument: none
	Return argument: none
*/
void hLine(void)
{
	int i;
        clearScreen(); //clear the screen
	//draw a single line on the 15th row from the left to the right 
        for(i=1; i<=60; i++) 
        {
                gotoxy(15, i);
                printf("*");
                delay(DELAY); //delay for 100ms
        }
        printf("\n"); //print a new line
        sleep(5); //delay for 5 seconds
}
