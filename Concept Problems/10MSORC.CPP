/*10-->3*3 matrix find sum of row and sum of col*/
#include<iostream.h>
#include<conio.h>
class matrix
{
	private:
		int i,j,sum=0;
	public:
		void row_sum()
		{
			cout<<"\nFinding sum of each row:\n\n";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					sum=sum+arr[i][j];
				}
			}
			cout<<"Sum of the rows"<<i<<" = "<<sum<<endl;
			sum=0;
		}
		void column_sum(int arr[m][n])
		{
			cout<<"\nFinding sum of each column:\n\n";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					sum=sum+arr[j][i];
				}
			}
			cout<<"Sum of the column"<<i<<" = "<<sum<<endl;
			sum=0;
		}
};
int main()
{
	int i,j;
	int arr[m][n];
	int n=1;
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
		arr[i][j]=x++;
	row_sum(arr);
	column_sum(arr);
}
void main()
{
	clrscr();
	matrix m;
	m.row_sum();
	m.column_sum();
	getch();
}
