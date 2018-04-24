/*
	This file contains code for the general management of the program
*/
//adding preprocessors
#include <stdio.h> 
#include <time.h>  
#include "drawing.h"

/*
	Function definition of clearScreen()
	This function will use VT100 escape sequence "/ESC[2J" to erase the total terminal screen
	Input argument: none
	Return argument: none
*/
void clearScreen(void) 
{
	printf("%c[2J", ESC); 
	fflush(stdout);
}
/*
	Function definition of gotoxy()
	This function uses VT100 escape sequence "/ESC[row;colH" to set the cursor to the specific
	location of the terminal screen
	Input argument:
		int row: row number (1 is top)
		int col: col number (1 is left)
	Return argument: none
*/
void gotoxy(int row, int col) 
{
	printf("%c[%d;%dH", ESC, row, col); 
	fflush(stdout);
}

/*
	Function definition of delay()
	This function makes use of the time.h library to get the clock cycle value and then check if
	a preset value of clock cycles have passed
	Input argument: int milliseconds (the amount of time to delay)
	Output argument: none
*/
void delay(int milliseconds) 
{
    long pause; 
    clock_t now,then; //initialize the clock register 
    pause = milliseconds*(CLOCKS_PER_SEC/1000); //convert the given time to number of clock cycle
    now = then = clock(); //store the clock cycle value into both register
    while((now-then) < pause ) //if less time than required has paased
       	now = clock(); //continue storing the clock cycle value to register now
}
