//Program to insert an element in an array
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, num, pos, arr[10];
	clrscr();
	printf("\n Enter the number of elements in array:");
	scanf("%d",&n);
	printf("\n Enter the elements in array:\n ");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n Traversing the array:",i);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d", i, arr[i]);
	}
	getch();
	printf("\n Enter the number to be inserted:");
	scanf("%d", &num);
	printf("\n Enter the position at which the number has to be inserted:");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos] = num;
	n = n+1;
	printf("\n The array after insertion of %d is: ",num);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d", i, arr[i]);
	}
	getch();
	return 0;
}