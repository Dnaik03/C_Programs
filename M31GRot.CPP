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

	//ask for translation parameters
	int tx,ty;
	cout<<"Enter translation parameters:\n";
	cin>>tx>>ty;

	//display the figure after translation
	setcolor(YELLOW);
	outtextxy(10+tx,90+ty,"After");
	rectangle(10+tx,100+ty,60+ty,130+ty);
	getch();
}