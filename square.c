#include <stdio.h>
#include "drawing.h"

void square(void)
{

	int i, j;
	clearScreen();
	for(i=0; i<=15; i++)
	{
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
		delay(DELAY);
	}
	printf("\n");
	sleep(5);
}
