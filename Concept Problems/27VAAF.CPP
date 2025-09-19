/*27-->pure virtual function and abstract class */
#include<iostream.h>
#include<conio.h>
class acircle
{
	protected:
		   float radius;
	public:
		virtual void read_radius()=0;
		virtual float get_area()=0;
};
class circle:public acircle
{
	private:
		float area;
	public:
		void read_radius()
		{
			cout<<"Enter radius:";
			cin>>radius;
		}
		float get_area()
		{
			return(3.14*radius*radius);
		}
		void show()
		{
			area=get_area();
			cout<<"Area of circle:"<<area;
		}
};
void main()
{
	clrscr();
	circle();
	circle c;
	c.read_radius();
	c.show();
	getch();
}

/*OUTPUT:Enter radius:2
	 Area of circle:12.56

  DEFINE:abstract class-->is a class that is designed to be specifically
			  used as a base class , it contains at least one
			  pure virtual function.
	 pure virtual function-->is a virtual function in c++which we need
				 not to write any function definition and
				 only we have to declare it.
*/