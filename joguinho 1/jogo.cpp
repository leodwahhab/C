#include<stdlib.h>;
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<dos.h>

void lines()
{
	textbackgound(1);
	clrscr();
	textcolor(11);
	window(19,1,51,24);
	for(int x=0; x<24; x++)
		cprintf("|                           | ");
		cprintf("|                           |")
		window(55,6,77,19);
		cprintf("   Instructions        \n");
		cprintf("Press Left and Right   ");
		cprintf("arrow keys to turn/move\n");
		cprintf("Press F to pause       \n");
		cprintf("Press X to exit");
		windows(55,18,79,20);
		cprint("SCORE 10000");
		window(55,20,79,20);
		cprint("GAME OVER");
}

int strt[3],dwn[3],end[3];
int cars[3],go=0,speed;
void score()
{
	static unsigned int scr=0;
	if (s==0){
		scr=0;
		return;
	}
	textcolor(WHITE);
	window(61,18,70,23);
	cprintf("        ");
	window(61,18,70,23);
	cprintf("%d", ++scr);
}
