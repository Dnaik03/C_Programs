/*8-->array of 10 no in ascending order*/
#include<iostream.h>
#include<conio.h>
class array
{
	private:
		int a[10];
		int temp;

	public:
		void read();
		void show();
};
void array::read()
{
	for(int i=0;i<10;i++)
	{
		cout<<"Enter the number:";
		cin>>a[i];
	}
}
void array::show()
{
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Ascending order:";
	for(i=0;i<10;i++)
	{
		cout<<" "<<a[i];
	}
}
void main()
{
	clrscr();
	array ar;
	ar.read();
	ar.show();
	getch();
}
/*OUTPUT:Enter the number:9
	 Enter the number:2
	 Enter the number:4
	 Enter the number:6
	 Enter the number:7
	 Enter the number:1
	 Enter the number:3
	 Enter the number:5
	 Enter the number:8
	 Enter the number:10
	 Ascending order:1 2 3 4 5 6 7 8 9 10
*/