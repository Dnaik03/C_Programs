/*21--> demonstrate single inheritance */
#include<iostream.h>
#include<conio.h>
class rectangle
{
	private:
		float length,width;
	public:
		void read()
		{
			cout<<"Enter length and width:";
			cin>>length>>width;
		}
		float get_area()
		{
			return(length*width);
		}
};
class box:public rectangle
{
    private:
		float height,volume;
    public:
		void read_height()
		{
			cout<<"Enter height:";
			cin>>height;
		}
		void show()
		{
			volume=get_area()*height;
			cout<<"Volume of the box="<<volume;
		}
};
void main()
{
	clrscr();
	box b;
	b.read();
	b.read_height();
	b.show();
	getch();
}

/*OUTPUT:Enter length and width: 2 4
	 Enter height:-5
	 Volume of the box=-40
  DEFINE: area=length*width
	  volume=area*height
*/