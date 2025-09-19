//11--> electricity board //
#include<iostream.h>
#include<conio.h>
class consumer
{
	private:
		char name[20];
		int unit;
		float charge;
	public:
		void read()
		{
			cout<<"Enter the name of consumer and unit consumes";
			cin>>name>>unit;
		}
		void show()
		{
			if(unit<100)
				charge=unit*1.50;
			else
				if(unit<=300)
					charge=150+(unit-100)*2.20;
				else
					charge=150+(unit-300)*3.00;
			cout<<"Total charge=Rs"<<charge;
		}
};
void main()
{
	consumer c;
	clrscr();
	c.read();
	c.show();
	getch();
}

/*OUTPUT: Enter the name of the consumer and the unit consumed rohit 100
	  Total= 150
*/