/*7-->array of 10 int numbers find largest sna smallest with their position*/
#include<iostream.h>
#include<conio.h>
const N=10;
class array
{
	private:
		int a[10];
		int large,small;
	public:
		void read()
		{
			for(int i=0;i<10;i++)
			{
				cout<<"Enter the number:";
				cin>>a[i];
			}
		}
		void show()
		{
			large=small=a[0];
			for(int i=0;i<N;i++)
			{
				if(a[i]>large)large=a[i];
				if(a[i]<small)small=a[i];
			}
			cout<<"largest number is="<<large<<"\n";
			cout<<"smallest number is="<<small<<"\n";
			cout<<"largest number is found at position:"<<large<<"\n";
			cout<<"smallest number is found at position:"<<small<<"\n";
		}
};
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
	 Largest number is=10
	 Smallest number is=1
	 Largest number is found at position:10
	 Smallest number is found at position:1
*/









