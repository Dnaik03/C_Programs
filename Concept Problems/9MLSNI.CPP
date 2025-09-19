/*9-->3*3 matrix largest and smallest number integer*/
#include<iostream.h>
#include<conio.h>
class array
{
	private:
		int a[3][3];
		int i,j;
		int large,small;
	public:
		void read();
		void show();
		void logic();
};
void array::read()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"Enter the number:";
			cin>>a[i][j];
		}
	}
}
void array::show()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<;
		}
		cout<<"\n";
	}
}
void array::logic()
{
	large=small=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>large)large=a[i][j];
			if(a[i][j]<small)small=a[i][j];
		}
	}
	cout<<"Largest Number:"<<large<<"\n";
	cout<<"Largest Smallest Number:"<<small<<"\n";
}
void main()
{
	array a;
	clrscr();
	a.read();
	a.show();
	a.logic();
	getch();
}
/*OUTPUT:
	 Enter the number:2
	 Enter the number:9
	 Enter the number:4
	 Enter the number:7
	 Enter the number:3
	 Enter the number:6
	 Enter the number:3
	 Enter the number:4
	 Enter the number:1
	 2 9 4
	 7 3 6
	 3 4 1
	 Largest:9
	 Smallest integer:1

*/


