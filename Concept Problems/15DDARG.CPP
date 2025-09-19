/*15-->default argument
---calculating simple interest */

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
double interest(int p,int n,double r)
{
	return((p*r*n)/100.0);
}
void main()
{
	double interest(int p,int n=1,double=10.5);
	clrscr();
	cout<<"interest(2000)=Rs"<<interest(2000)<<"\n";
	cout<<"interest(2000,2)=Rs"<<interest(2000,2)<<"\n";
	cout<<"interest(2000,2,9.5)=Rs"<<interest(2000,2,9.5)<<"\n";
	getch();
}

/*OUTPUT:interest(2000)=Rs210
	 interest(2000,2)=Rs420
	 interest(2000,2,9.5)=Rs380

 DEFINE:default argument-->is a value provided in a function declaration
			   that is automatically assigned by the compiler
			   if the calling function doesn't provide a value
			   for the argument.
*/