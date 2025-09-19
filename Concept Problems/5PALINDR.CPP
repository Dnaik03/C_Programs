//Palindrom or not//
/* define: a word,phrase or sequence that reads the same backwards
as forword for eg: madam, level , etc*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
class palin
{
	private:
		char str[20];
		int len;
	public:
		void read_string();
		void show_ispalin();
};
void palin::read_string()
{
	cout<<"Enter the string";
	cin>>str;
}
void palin::show_ispalin()
{
	int temp=0;
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]!=str[len=i-1])
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	{
		cout<<"String is NOT PALINDROME";
	}
	else
	{
		cout<<"String is PALINDROME";
	}
}
void main()
{
	palin p;
	clrscr();
	p.read_string();
	p.show_ispalin();
	getch();
}

/*OUTPUT:Enter the string: Madam
	string is PALINDROME*/

//function strlen[str]--> calculate the length of a given string//