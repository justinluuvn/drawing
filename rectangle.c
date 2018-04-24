#include <stdio.h>
#include "drawing.h"

void rectangle(void)
{
	int i, j;
	clearScreen();
	gotoxy(0,0);
	for(i=0;i<=40;i++)
	{
		gotoxy(1, 1+2*i);
		printf("*");
		gotoxy(31, 81-2*i);
		printf("*");
		delay(DELAY);
	}
	for(i=0;i<=30;i++)
	{
		gotoxy(31-i, 1);
		printf("*");
		gotoxy(1+i, 81);
		printf("*");
		delay(DELAY);
	}
	printf("\n");
	sleep(5);
}
