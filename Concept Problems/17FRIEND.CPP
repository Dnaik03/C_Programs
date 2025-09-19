/*17 --> -,++,-- Friend operator function*/

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
		friend void operator-(test&m);
		friend void operator++(test &m);
		friend void operator--(test &m);
};
void operator-(test&m)
{
	m.a=-m.a;m.b=-m.b;m.c=-m.c;
}
void operator++(test&m)
{
	++m.a;++m.b;++m.c;
}
void operator--(test&m)
{
	--m.a;--m.b;--m.c;
}
void main()
{
	test t(-10,20,-30);
	clrscr();
	t.show();
	-t;
	cout<<"after overloading-operator\n\n";
	t.show();
	++t;
	cout<<"after overloading++operator\n\n";
	t.show();
	--t;
	cout<<"after overloading--operator\n\n";
	t.show();
	getch();
}
/*OUTPUT:a=-10 b=20 c=-30
	 after overloading-operator

	 a=10 b=-20 c=30
	 after overloading--operator

	 a=11 b=-19 c=31
	 after overloading++operator

	 a=10 b=-20 c=30


  DEFINE:unary operator:is a operator that act upon a single oprand to produce
			a new value
			following are the example of unary operator
			++(the increment)
			--(the decrement)
			-(minus)
*/