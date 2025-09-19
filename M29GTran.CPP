#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	//initialize graphics mode
	int gd=DETECT, gm;
	initgraph(&gd,&gm,"c:\\TurboC3\\bgi");

	//display the figure before scaling
	setcolor(RED);
	outtextxy(10,90,"Before");
	rectangle(10,100,60,130);

	//ask for scaling parameters
	int sx,sy;
	cout<<"Enter scaling parameters:\n";
	cin>>sx>>sy;

	//display the figure after scaling
	setcolor(YELLOW);
	outtextxy(10*sx,90*sy,"After");
	rectangle(10*sx,100*sy,60*sx,130*sy);
	getch();
}