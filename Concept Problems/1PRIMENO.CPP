//1-->to check number is prime or not//

#include<iostream.h>
#include<conio.h>
class checkPrime
{
	private:
		int num;
		int isPrime();
	public:
		void readNumber()
		{
			cout<<"Enter the number";
			cin>>num;
		}
		void showPrime()
		{
			if(isPrime())
				cout<<num<<"is prime number";
			else
				cout<<num<<"is unprime number";
		}
};
int checkPrime::isPrime()
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		return(0);
	}
	return(1);
}
void main()
{
	  checkPrime p;
	  clrscr();
	  p.readNumber();
	  p.showPrime();
	  getch();
}

/*OUTPUT: Enter the number 13
	 13 is prime number*/






