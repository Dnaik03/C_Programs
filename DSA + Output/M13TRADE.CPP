//Program to delete an element in an array
#include<stdio.h>
#include<conio.h>
int main()
{
	int i, n, pos, arr[100];
	clrscr();
	printf("\n Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("\n Enter the elements in array: ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Traversing the array",i);
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d", i, arr[i]);
	}
	printf("\n Enter the position at which the element will be deleted:");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		arr[i] = arr[i+1];
		n--;
	}
	printf("\n The array after deletion is: ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = %d", i, arr[i]);
	}
	getch();
	return 0;
}