#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main()
{
	int theta;//angle in degrees
	double x1,y1,x2,y2;//original line coordinates
	double nx1,ny1,nx2,ny2;//new line coordinates
	double rad;//angle in radians
	char clock;//direction of rotation
	clrscr();

	//ask the user for rotation info
	cout<<"\n\n\tEnter angle of rotation";
	cin>>theta;
	cout<<"\n\n\tClockwise rotation[Y/N]";
	ask_again;
	cin>>clock;
	if(clock!='Y'&&clock!='y'&&clock!='N'&&clock!='n')
	goto ask_again;

	rad=(theta*3.14128)/180;//degrees to radians conversion

	/*rotate the point and translate it
	w.r.t. to the center of the screen*/
	if(clock=='N'||clock=='n')
	{
		nx2=100*cos(rad);
		ny2=-100*sin(rad);
	}
	else
	{
		nx2=100*cos(rad);
		ny2=100*sin(rad);
	}
	nx2+=320;
	ny2+=240;
	//initialize graphics mode
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
	//display text
	setcolor(RED);
	outtextxy(35,75,"RED:->Original");
	setcolor(GREEN);
	outtextxy(35,90,"Green:->Rotated");

	x1=320; y1=240; x2=420; y2=240;
	nx1=x1; ny1=y1;
	//display the original and the rotated line
	setcolor(RED);
	line(x1,y1,x2,y2);
	setcolor(GREEN);
	line(nx1,ny1,nx2,ny2);
	getch();
}