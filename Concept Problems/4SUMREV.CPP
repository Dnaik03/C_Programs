/*4-->sumrev*/
#include<iostream.h>
#include<conio.h>
class sumrev
{
	private:
		long int n,r,s,sr;
	public:
		void read()
		{
			cout<<"Enter the value:";
			cin>>n;
		}
		void show()
		{
			s=0;
			sr=0;
			while(n>0)
			{
				r=n%10;
				s=s+r;
				sr=sr*10+r;
				n=n/10;
			}
			cout<<"Sum of the digit="<<s<<"\n";
			cout<<"Reverse of the digit="<<sr;
		}
};
void main()
{
	sumrev sr;
	clrscr();
	sr.read();
	sr.show();
	getch();
}
/*OUTPUT:Enter the value:123
	Sum of digit=6
	Reverse of the digit=321
*/












/*
#include<iostream.h>
#include<conio.h>
class sumrev
{
	private:
		long int n,r,s,a;
	public:
		void read()
		{
			cout<<"Enter value:";
			cin>>n;
		}
		void show()
		{
			s=0;
			while(n>0)
			{
				r=n%10;
				s=s+r;
				n=n/10;
			}
			cout<<"Sum of digit="<<s<<endl;
		}
		void getdata()
		{
			cout<<"Enter the number to get reverse:";
			cin>>a;
		}
		void setdata()
		{
			while(a>0)
			{
				r=a%10;
				cout<<r;
				a=a/10;
			}
		}
};
void main()
{
	clrscr();
	sumrev sr;
	sr.read();
	sr.show();
	sr.getdata();
	sr.setdata();
	getch();
} */
/*OUTPUT:Enter value: 234
	 sum of digit=9
	 Enter the number to get reverse:234
	 432

*/