/*26--> runtime polymorphism handling by virtual function*/
#include<iostream.h>
#include<conio.h>
class base
{
	public:
		virtual void show()
		{
			cout<<"Show base class....";
		}
};
class derived:public base
{
	public:
		void show()
		{
			cout<<"Show derived class....";
		}
};
void main()
{
	clrscr();
	base*bptr;
	derived d;
	bptr=&d;
	bptr->show();
	getch();
}
/*OUTPUT:Show derived class....

  DEFINE:Virtual Function--> is a base class member function that you
			     can redefine in a derived class to
			     achieve polymorphism .
	 Run-time Polymorphism-->also known as dynamic method dispatch
				 is a process in which a call to an overridden
				 method is resolved at runtime rather than
				 compile-time
*/


