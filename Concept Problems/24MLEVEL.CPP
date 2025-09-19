/*24-->multilevel inheritance */
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
class marks:public student
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
class result:public marks
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

/*OUTPUT:Enter thr rollno. and name: 100 ramesh
	 Enter the marks of 3 subjects:20 40 50
	 Roll no:100
	 Student name:Ramesh
	 Total Marks:110

 DEFINE:multilevel inheritance-->in c++ not only you can derive a class
				 from the base class but also derive a class
				 from derived class this form is call
				 multilevel inheritance.
*/