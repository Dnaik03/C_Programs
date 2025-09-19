/*18-->+,- operator using member function*/
#include<iostream.h>
#include<conio.h>
class test
{
	private:
		int a,b,c;
	public:
		test(){}
		test(int x,int y,int z)
		{
			a=x;b=y;c=z;
		}
		void show()
		{
			cout<<"a="<<a<<" "<<"b="<<b<<" "<<"c="<<c<<"\n";
		}
		test operator+(test);
		test operator-(test);
};
test test::operator+(test m)
{
	test temp;
	temp.a=a+m.a;
	temp.b=b+m.b;
	temp.c=c+m.c;
	return(temp);
}
test test::operator-(test m)
{
	test temp;
	temp.a=a-m.a;
	temp.b=b-m.b;
	temp.c=c-m.c;
	return(temp);
}
void main()
{
	clrscr();
	test t1(2,3,4);
	test t2(5,6,7);
	test t3;
	cout<<"t1:";t1.show();
	cout<<"t2:";t2.show();
	t3=t1+t2;
	cout<<"t3:";t3.show();
	t3=t1-t2;
	cout<<"t3:";t3.show();
	getch();
}

/*OUTPUT:t1:a=2 b=3 c=4
	 t2:a=5 b=6 c=7
	 t3:a=7 b=9 c=11
	 t3:a=-3 b=-3 c=-3

 DEFINE:Member function:operators and functions that are declared as member
			of a class
*/