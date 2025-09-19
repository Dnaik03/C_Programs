/*20-->overload== using member /friend function  */

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
			cout<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\n";
		}
		friend int operator==(test m,test n);
};
int operator==(test m,test n)
{
	if(m.a==n.a&&m.b==n.b&&m.c==n.c)
		return(1);
	else
		return(0);
}
void main()
{
	clrscr();
	test t1(50,60,70);
	test t2(50,60,70);
	cout<<"t1:";t1.show();
	cout<<"t2:";t2.show();
	if(t1==t2)
		cout<<"both are equal";
	else
		cout<<"both are unequal";
	getch();
}
/*OUTPUT: t1:50,60,70
	  t2:50,60,70
	  both are equal

  DEFINR: Member function: are operators and functions that are declared
			   as member of a class

	  Friend function: function that can access private,protected
			   and public members of a class

	  Overload:c++ let's you specify more than one function of the same
		   scope these functions are called overloaded functions
		   or overloads.
		   overloads unable you to supply different semantics for
		   a function ,depending on the types and number of its
		   argument.
*/