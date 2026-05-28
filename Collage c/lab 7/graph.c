#include<graphics.h>
int main(void){
	int gdriver= VGA,gmode=VGAHI;
	initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
	setcolor(RED);
	circle(200,100,50);
	outtextxy(200,100,".");
	outtextxy(175,110,"(200,100)");
	settextstyle(GOTHIC_FONT, HORIZ_DIR,2);
	moveto(50,175);
	outtext("Fig: Circle having radius 50 and center at point 200,100");
	getch();
	closegraph();
	return 0;
}
