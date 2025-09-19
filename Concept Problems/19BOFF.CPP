/*19-->binary operator using friend function */
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
			cout<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\n";
		}
friend test operator+(test m,test n)
{
	test temp;
	temp.a=m.a+n.a;
	temp.b=m.b+n.b;
	temp.c=m.c+n.c;
	return(temp);
}
friend test operator-(test m,test n)
{
		test temp;
		temp.a=m.a-n.a;
		temp.b=m.b-n.b;
		temp.c=m.c-n.c;
		return(temp);
}
};
void main()
{
	clrscr();
	test t1(50,60,70);
	test t2(10,20,30);
	test t3;
	cout<<"t1:";t1.show();
	cout<<"t2:";t2.show();
	t3=t1+t2;
	cout<<"t3;";t3.show();
	getch();
}

/*OUTPUT:t1:50,60,70
	 t2:10,20,30
	 t3:60,80,100

  DEFINE: Binary operator:they act upon a two operands to produce a new value

	  Overloading: refers to the ability to use a single identifier to
		       define multiple methods of a class that differ in their
		       inputs and output parameter
*/