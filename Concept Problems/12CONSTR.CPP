/*12-->parameterized constructor, non-parameterized constructor,
	copy construct
	(constructor overloading)   */

#include<iostream.h>
#include<conio.h>
class test
{
	private:
		int a,b;
	public:
		test(void)//non-parameterized constructor//
		{
			a=b=0;
		}
		test(int x,int y)//parameterized constructor//
		{
			a=x;b=y;
		}
		test(int m)//parameterized constructor//
		{
			a=b=m;
		}
		test(test &i)//copy constructor//
		{
			a=i.a;
			b=i.b;
		}
		void show(void)
		{
			cout<<"a="<<a<<"\n";
			cout<<"   b="<<b<<"\n\n";
		}
};
void main()
{
	clrscr();
	test t1;
	cout<<"t1:";
	t1.show();
	test t2(100,200);
	cout<<"t2:";
	t2.show();
	test t3(500);
	cout<<"t3:";
	t3.show();
	test t4(t2);
	cout<<"t4:";
	t4.show();
	test t5=t3;
	cout<<"t5:";
	t5.show();
	getch();
}

/*OUTPUT:t1:a=0
	    b=0
	 t2:a=100
	    b=200
	 t3:a=500
	    b=500
	 t4:a=100
	    b=200
	 t5:a=500
	    b=500
define: parametrixe constructor-->the constructor that can take
				     the arguments
	   non paramet constructor-->the constructor that cannot
				     take the arguments
	   copy constructor--> it is a constructor which creates an
			       object by initializing it with an object
			       of the same class which has been created
			       previously

*/