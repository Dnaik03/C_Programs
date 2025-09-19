/*16-->unary operator overloading using member function*/

#include<iostream.h>
#include<conio.h>
class test
{
	private:
		int a,b,c;
	public:
		test(int x,int y,int z)
		{
			a=x;b=y;c=z;
		}
		void show()
		{
			cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<"\n";
		}
		void operator-()
		{
			a=-a;b=-b;c=-c;
		}
		void operator++()
		{
			++a;++b;++c;
		}
		void operator--()
		{
			--a;--b;--c;
		}
};
void main()
{
	test t(-10,20,-30);
	clrscr();
	t.show();
	-t;
	cout<<"After overloading-operator\n\n";
	t.show();
	++t;
	cout<<"After overloading++operator\n\n";
	t.show();
	--t;
	cout<<"After overloading--operator\n\n";
	getch();
}

/*OUTPUT:a=-10 b=20 c=30
	 After overloading-operator

	 a=10 b=-20 c=30
	 After overloading++operator

	 a=11 b=-19 c=31
	 After overloading--operator

*/