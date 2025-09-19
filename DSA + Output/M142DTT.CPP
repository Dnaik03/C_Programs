#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5][5],trans[5][5],r,c,i,j,matrix[10][10];
	clrscr();
	printf("Enter rows and columns: ");
	scanf("%d %d",&r,&c);
	printf("\n Enter matrix element: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d :",i+1,j+1);
			scanf("\n %d",&a[i][j]);
		}
	}
	printf("\n Traverse Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			if(j==c-1)
				printf("\n");
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("\n Transpose of matrix: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",trans[i][j]);
			if(j==r-1)
				printf("\n");
		}
	}
	getch();
	return 0;
}
