/*
	This file contains the code for drawing two diagonal straight lines which intersect each other in their center.
*/
#include <stdio.h> //add preprocessors
#include "drawing.h"

void iLines(void)
{
	int i;
	clearScreen(); //clear the screen
	//from the four end points of two lines, gradually extend the lines by adding character "*" toward the intersecting point
	for(i=0;i<=20;i++)
	{
		//each loop cycle, four "*" are added 
		gotoxy(1+i,1+2*i);
		printf("*");
		gotoxy(41-i,81-2*i);
                printf("*");
		gotoxy(41-i,1+2*i);
                printf("*");
		gotoxy(1+i,81-2*i);
                printf("*");
		delay(DELAY); //delay for 100ms
	}
	printf("\n"); //print a new line
	sleep(5); //delay for 5 seconds
}
