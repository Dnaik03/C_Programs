

/*6-->bank transaction//
#include<iostream.h>
#include<conio.h>
class account
{
	private:
		int accno;
		char name[20];
		float balance;
	public:
		void open_account()
		{
			cout<<"Enter tye account no";
			cin>>accno;
			cout<<"Enter the acc holder name";
			cin>>name;
			balance=500;
		}
		void show_account()
		{
			cout<<"Account no:"<<accno<<"\n";
			cout<<"Name of consumer:"<<name<<"\n";
			cout<<"Current balance:"<<balance<<"\n";
		}
		void deposit()
		{
			float amt;
			cout<<"Enter the amount to be deposited";
			cin>>amt;
			balance=balance+amt;
			cout<<"Rs"<<amt<<"is created in your account\n";
			cout<<"and current balance is Rs"<<balance;
		}
		void withdraw()
		{
			float amt;
			cout<<"Enter the amount to be withdraw";
			cin>>amt;
			if(amt<balance)
			{
				balance=balance-amt;
				cout<<"Rs"<<"is created from your account\n";
				cout<<"and current balance is Rs"<<balance;
			}
			cout<<"Insufficient balance can't withdraw";
		}
};
void main()
{
	account a;
	int ch;
	while(1)
	{
		clrscr();
		cout<<"****MAIN MEMORY****";
		cout<<"\n1Open the account";
		cout<<"\n2Show the details";
		cout<<"\n3Deposit the amount";
		cout<<"\n4Withdrawl the amount";
		cout<<"\n5Exit";
		cout<<"Enter yout choice(1-5)";
		cin>>ch;
		cout<<"\n\n";
		switch(ch)
		{
			case1:a.open_account();
			break;
			case2:a.show_account();
			break;
			case3:a.deposit();
			break;
			case4:a.withdraw();
			break;
			case5:cout<<"Thank you ....visit again";
			getch();

		}
		getch();
	}
}

*/