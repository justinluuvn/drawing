#include <stdio.h>
#include "drawing.h"

void iLines(void)
{
	int i;
	clearScreen();
	for(i=0;i<=20;i++)
	{
		gotoxy(1+i,1+2*i);
		printf("*");
		gotoxy(41-i,81-2*i);
                printf("*");
		gotoxy(41-i,1+2*i);
                printf("*");
		gotoxy(1+i,81-2*i);
                printf("*");
		delay(DELAY);
	}
	printf("\n");
	sleep(5);
}
