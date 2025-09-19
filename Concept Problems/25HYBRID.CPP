/*25-->Hybrid inheritance*/

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
		  int sub1,sub2;
	public:
		void read_marks()
		{
			cout<<"Enter marks:";
			cin>>sub1>>sub2;
		}
};
class sports
{
	protected:
		  int score;
	public:
	       void read_score()
	       {
			cout<<"Enter score";
			cin>>score;
	       }
};
class result:public marks,public sports
{
	private:
		int total;
	public:
		void show()
		{
			total=sub1+sub2;
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
	r.read_score();
	r.show();
	getch();
}
/*OUTPUT:Enter rollno. and name:45 rajesh
	 Enter marks:56 67
	 Enter score:66
	 Rollno:45
	 Stundent Name:rajesh
	 Total marks:123

 DEFINE:hybrid inheritance-->the process by which a sub class follows
			     multiple types of inheritance while deriving
			     properties from the base or super class

*/