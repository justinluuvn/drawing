/*
	This file contains the code for gradually drawing a triangle
*/
#include <stdio.h>  //add preprocessors
#include "drawing.h"

/*
	Function definition of triangle()
	This is to use for drawing a triangle with a set of letter "*"
	Input argument: none
	Return argument: none
*/
void triangle(void) 
{
	int i, j; 
	clearScreen(); //clear the screen
	gotoxy(0,0); //got to the top
	for(i=0;i<30;i++)
		printf(" "); //go to the top of the triangle
	printf("*\n"); //draw one of its vertices
	delay(DELAY); //wait
	//the following is to draw two of the three edges of the triangle
	for(i=1;i<=29;i++) 
	{ 
		for(j=0;j<30-i;j++)
			printf(" "); 
		printf("*"); 
		for(j=0;j<2*i-1;j++) 
			printf(" "); 
		printf("*\n"); 
		delay(DELAY);
	}
	//then draw the last edge by approaching from both vertices
	for(i=0;i<=15;i++) 
	{
		gotoxy(31, 2*i+1); 
		printf("*"); 
		gotoxy(31, 61-2*i); 
		printf("*"); 
		delay(DELAY);
	}
	gotoxy(31, 31); //reaching the last milestone for building the triangle
	printf("*\n"); 
	sleep(5); //wait for 5 seconds
}
