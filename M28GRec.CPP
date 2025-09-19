#include<iostream.h>
#include<conio.h>
#include<graphics.h>
class House
{
	private:
		int ll_x1,ll_y1,ll_x2,ll_y2,
		l2_x1,l2_y1,l2_x2,l2_y2,
		l3_x1,l3_y1,l3_x2,l3_y2,
		l4_x1,l4_y1,l4_x2,l4_y2,
		l5_x1,l5_y1,l5_x2,l5_y2;
	public:
		House();
		void drawHouse();
};
House::House()
{
	ll_x1=100,ll_y1=100,ll_x2=150,ll_y2=200,
	l2_x1=150,l2_y1=200,l2_x2=150,l2_y2=350,
	l3_x1=150,l3_y1=350,l3_x2=50,l3_y2=350,
	l4_x1=50,l4_y1=350,l4_x2=50,l4_y2=200,
	l5_x1=50,l5_y1=200,l5_x2=100,l5_y2=100;
}
void House::drawHouse()
{
	line(ll_x1,ll_y1,ll_x2,ll_y2);
	line(l2_x1,l2_y1,l2_x2,l2_y2);
	line(l3_x1,l3_y1,l3_x2,l3_y2);
	line(l4_x1,l4_y1,l4_x2,l4_y2);
	line(l5_x1,l5_y1,l5_x2,l5_y2);
}
void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\TurboC3\\bgi");
	House h;
	h.drawHouse();
	getch();
	closegraph();
}