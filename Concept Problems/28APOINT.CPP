/*28-->array of pointer of object with example*/
#include<iostream.h>
#include<conio.h>
class person
{
	private:
		int age;
		char name[20];
	public:
		void read()
		{
			cout<<"Enter name and age";
			cin>>name>>age;
		}
		void show()
		{
			cout<<"Age of"<<name<<"is"<<age<<"\n";
		}
};
void main()
{
	clrscr();
	person p[3],*ptr;
	ptr=p;
	for(int i=0;i<3;i++)
	{
		ptr->read();
		ptr++;
	}
	cout<<"\n-------------------\n";
	ptr=p;
	for(int j=0;j<3;j++)
	{
		ptr->show();
		ptr++;
	}
	getch();
}
/*OUTPUT:Enter name and age:madhu 18
	 Enter name and age:pooja 33
	 Enter name and age:radha 24
	 -----------------------------
	 Age of madhu is 18
	 Age of pooja is 33
	 Age of radha is 24

  DEFINE:an array of pointers is an array that consists of variable of
	 pointer type,which means that the variable is a pointer addressing
	 to some other element.
*/


/*
#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
	private:
		int rollno;
		char name[20];
	public:
		void setdata(int rn,char*n);
		void showdata();
};
void student::setdata(int rn,char*n)
{
	rollno=rn;
	strcpy(name,n);
}
void student::showdata()
{
	cout<<"Rollno:"<<rollno<<"\n";
	cout<<"Student name:"<<name<<"\n";
}
void main()
{
	clrscr();
	student s[3],*ptr;
	int rno;
	char nm[20];
	ptr=s;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter details of student"<<i+1<<"\n";
		cout<<"Enter the rollno & student name";
		cin>>rno>>nm;
		ptr->setdata(rno,nm);
		ptr++;
	}
	ptr=s;
	for(i=0;i<3;i++)
	{
		cout<<"Details of student"<<i+1<<"\n";
		ptr->showdata();
		ptr++;
	}
	getch();
}
*/
