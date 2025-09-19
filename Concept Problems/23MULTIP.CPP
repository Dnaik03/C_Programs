/*23-->multiple inheritance */
#include<iostream.h>
#include<conio.h>
class student
{
	protected:
		  int rollno;
		  char name[20];
	public:
		void read()
		{
			cout<<"Enter rollno. and name:";
			cin>>rollno>>name;
		}
};
class marks
{
	protected:
		  int sub1,sub2,sub3;
	public:
		void read_marks()
		{
			cout<<"Enter marks of 3 subjects:";
			cin>>sub1>>sub2>>sub3;
		}
};
class result:public student,public marks
{
	private:
		int total;
	public:
		void show()
		{
			total=sub1+sub2+sub3;
			cout<<"Rollno:"<<rollno<<"\n";
			cout<<"Student name:"<<name<<"\n";
			cout<<"Total marks:"<<total<<"\n";
		}
};
void main()
{
	clrscr();
	result r;
	r.read();
	r.read_marks();
	r.show();
	getch();
}
/*OUTPUT: Enter roll no and name: 102 rajesh
	  Enter marks of 3 subjects: 40 20 40
	  Roll no:102
	  Student name:rajesh
	  Total marks:100

 DEFINE:multiple inheritance-->when a class inherits from more than one
			       base class.
*/







/*
#include<iostream.h>
#include<conio.h>
class base1
{
	private:
		int a;
	public:
		void set_a(int x)
		{
			a=x;
		}
		int get_a()
		{
			return(a);
		}
};
class base2
{
	private:
		int b;
	public:
		void set_b(int y){b=y;}
		int get_b(){return(b);}
};
class derived:public base1,public base2
{
	private:
		int sum;
	public:
		void show()
		{
			sum=get_a()+get_b();
			cout<<"a="<<get_a()<<"\n";
			cout<<"b="<<get_b()<<"\n";
			cout<<"sum="<<sum<<"\n";
		}
};
void main()
{
	clrscr();
	derived d;
	d.set_a(10);
	d.set_b(20);
	d.show();
	getch();
}
*/
/*OUTPUT:a=10
	 b=20
	 sum=30

 DEFINE:multiple inheritance-->when a class inherits from more than one
			       base class.
*/