/*13--> constructor and destructor using static data member */

#include<iostream.h>
#include<conio.h>
int count;
class test
{
	public:
		test()
		{
			count++;
			cout<<"No. of object created:"<<count<<"\n";
		}
		~test()
		{
			cout<<"No. of object destroyed:"<<count<<"\n";
			--count;
		}
};
void main()
{
	clrscr();
	cout<<"Enter MAIN BLOCK\n";
	test t1,t2;
	{
		cout<<"Enter BLOCK1\n";
		test t3;
	}
	{
		cout<<"Enter BLOCK2\n";
		test t4;
	}
	cout<<"RE-ENTERD MAIN BLOCK\n";
	getch();
}
/*OUTPUT:
	 Enter MAIN BLOCK
	 No. of object created:1
	 No. of object created:2
	 Enter BLOCK1
	 No. of object created:3
	 No. of object destroyed:3
	 Enter BLOCK2
	 No. of object created:3
	 No. of object destroyed:3
	 RE-ENTERD MAIN BLOCK
	 No. of object destroyed:2
	 No. of object destroyed:1

*/






















/*
#include<iostream.h>
#include<conio.h>
class test
{
	private:
		static int count;
	public:
		test()
		{
			count++;
			cout<<"No. of object created:"<<count<<"\n";
		}
		~test()
		{
			count--;
			cout<<"No. of object destroyed:"<<count<<"\n";
		}
};
int test::count;
void main()
{
	clrscr();
	cout<<"ENTER MAIN BLOCK:\n";
	test t1,t2,t3,t4;
	cout<<"Enter BLOCK1\n";
	cout<<"Enter BLOCK2\n";
	cout<<"RE-ENTERED MAIN BLOCK\n";
	getch();
}
 */
/*OUTPUT:No. of object created:1
	 No. of object created:2
	 No. of object created:3
	 No. of object created:4
	 Enter BLOCK1
	 Enter BLOCK2
	 RE-ENTERED MAIN BLOCK
	 No. of object destroyed:3
	 No. of object destroyed:2
	 No. of object destroyed:1
	 No. of object destroyed:0

*/

