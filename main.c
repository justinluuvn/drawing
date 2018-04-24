/*
	This project aims at creating a program capable of drawing certain shapes like triagnle, rectangle, circle, etc.
*/
#include <stdio.h> //add preprocessor
#include "drawing.h"

int main(void) {
	int choice; 
	while(1) 
	{
		clearScreen(); //clear the screen
		gotoxy(0,0); //go to the top
		//Then the program will print out the instruction
		printf("***************************************************************************\n"); 
		printf("*                           Drawing Project                               *\n"); 
		printf("***************************************************************************\n"); 
		printf("This project aims at creating several shape using Raspberry Pi 3.          \n");
		printf("The following is the list of shapes supported in the project:              \n");
		printf("1. Triangle                                                                \n"); 
		printf("2. Circle                                                                  \n");
		printf("3. Rectangle                                                               \n"); 
		printf("4. Square                                                                  \n");
		printf("5. Horizontal Line                                                         \n");
		printf("6. Intersecting Line                                                       \n"); 
		printf("7. Quit                                                                    \n"); 
		printf("Type the approriate digit to initialize the drawing of the shape or quit: "); //the user makes the choice here 
		scanf("%d", &choice); //read the user's choice
		if(choice==1)  //choosing triangle
			triangle(); 
		if(choice==2)  //choosing circle
			circle(); 
		if(choice==3)  //choosing rectangle
			rectangle();
		if(choice==4)  //choosing square
			square(); 
		if(choice==5)  //choosing horizontal line
			hLine(); 
		if(choice==6)  //choosing intersecting lines
		iLines(); 
		if(choice==7)  //wanna quit
		{
			clearScreen(); //once again clear the screen
			gotoxy(0,0);  //and the go to the top
			break;
		}
	}
	return 0;
}
