/*2-->to find LCM and GCD */
#include<iostream.h>
#include<conio.h>
class lcmgcd
{
	private:
		int num1,num2;
		int gcd,lcm;
		int getgcd();
	public:
		void read();
		void show();
};

void lcmgcd::read()
{
	cout<<"Enter the two numbers";
	cin>>num1>>num2;
}
void lcmgcd::show()
{
	gcd=getgcd();
	lcm=(num1*num2)/gcd;
	cout<<"LCM="<<lcm<<"\n";
	cout<<"GCD="<<gcd<<"\n";
}
int lcmgcd::getgcd()
{
	int m,n;
	m=num1;
	n=num2;
	while(m!=n)
	{
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}
	return(m);
}
void main()
{
	lcmgcd lg;
	clrscr();
	lg.read();
	lg.show();
	getch();
}

/* OUTPUT : Enter the numbers 12 20
	    LCM = 60
	    GCD = 4
*/
/* LCM:least common multiple
   GCD:greatest common divisor*/
