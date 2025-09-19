/*22-->single inheritance find vol of cylinder */
#include<iostream.h>
#include<conio.h>
class circle
{
	private:
		float radius;
	public:
		void read()
		{
			cout<<"Enter radius:";
			cin>>radius;
		}
		float get_area()
		{
			return(3.14*radius*radius);
		}
};
class cylinder:public circle
{
	private:
		float height,volume;
	public:
		void read_height()
		{
			cout<<"Enter height:";
			cin>>height;
		}
		void show()
		{
			volume=get_area()*height;
			cout<<"Volume="<<volume;
		}
};
void main()
{
	clrscr();
	cylinder c;
	c.read();
	c.read_height();
	c.show();
	getch();
}

/*OUTPUT: Enter radius:2
	  Enter height:4
	  volume=50.24

DEFINE:single inheritance-->the inheritance in which a derived class is
			    inherited from the only one base class
	area=3.14*radius*radius
	volume=area*height
*/