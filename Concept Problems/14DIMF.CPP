/*14-->demonstrate inline member function with ex */

#include<iostream.h>
#include<conio.h>
class circle
{
	private:
		float radius,area;
	public:
		void read()
		{
			cout<<"Enter the radius";
			cin>>radius;
		}
		void show()
		{
			area=getarea();
			cout<<"Area of circle="<<area;
		}
		inline float getarea()
		{
			return(3.14*radius*radius);
		}
};
void main()
{
	clrscr();
	circle c;
	c.read();
	c.show();
	getch();
}

/* OUTPUT: Enter the radius 1
	   Area of circle 3.14

   DEFINE: inline function-->it is an enhancement features that improves
			      the execution time and speed of the program
	   inline member function--> functions that are expanded in line
				     when it is called
*/