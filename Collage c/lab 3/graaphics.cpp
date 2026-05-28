#include <graphics.h>
int main(){
	int gd = DETECT, gm;//gd=graphics driver
	//gm=graphics mode
	//detect=to detect driver
	initgraph(&gd,&gm,"C:\\TC\\BGI");//C:\\TC\\BGI
	line(10,50,200,30);
	outtextxy(250,200,"hello \n");
	outtext("hello");
	getch();
	closegraph();
	return 0;
}
