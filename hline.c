#include <stdio.h>
#include "drawing.h"

void hLine(void)
{
	int i;
        clearScreen();
        for(i=1; i<=60; i++)
        {
                gotoxy(15, i);
                printf("*");
                delay(DELAY);
        }
        printf("\n");
        sleep(5);
}
