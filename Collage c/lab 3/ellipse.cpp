#include<graphics.h>
int main(){
	int gd = DETECT, gm;//gd=graphics driver
	//gm=graphics mode
	//detect=to detect driver
	initgraph(&gd,&gm,"C:\\TC\\BGI");//C:\\TC\\BGI
	ellipse(200,200, 0,360,100,50);
	
	getch();
	closegraph();
	return 0;
}
