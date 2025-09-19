/*3-->Fibonacci series
define : a series number in which each number ( fibonacci number) is
the sum of the two preceding number */

#include<iostream.h>
#include<conio.h>
class Fibonacci
{
	private:
		int n;
		int next_term;
	public :
		void read_term();
		void show_fibo();
};
void Fibonacci::read_term()
{
	cout<<"Enter the number of terms";
	cin>>n;
}
void Fibonacci::show_fibo()
{
	int t1=0;
	int t2=1;
	cout<<"Fibonacci series="<<t1<<"\t"<<t2<<"\t";
	for(int i=3;i<=n;i++)
	{
		next_term=t1+t2;
		t1=t2;
		t2=next_term;
		cout<<next_term<<"\t";
	}
}
void main()
{
		Fibonacci fi;
		clrscr();
		fi.read_term();
		fi.show_fibo();
		getch();
}
/* OUTPUT: Enter the number of terms 5
0 1 1 2 3 */






/* //Fibonacci series for n terms//
#include<iostream.h>
#include<conio.h>
class A
{
	private:
		int n,a,b,c;
	public:
		void fib()
		{
			a=0; b=1;
			cout<<"Enter the number of terms";
			cin>>n;
			for(int i=1;i<=n;i++)
			{
				cout<<a<<endl;
				c=a+b;
				a=b;
				b=c;
			}
		}
};
void main()
{
	clrscr();
	A obj;
	obj.fib();
	getch();
}

*/