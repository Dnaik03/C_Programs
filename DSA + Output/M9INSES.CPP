//Program for insertion sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100], n, i, j, key;
	clrscr();
	printf("\n Enter the number of elements in an array:");
	scanf("%d",&n);
	printf("\n Enter the elements in array: ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	//Insertion Sort Algorithm
	for(i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("Sorted Array after using Insertion Sort: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	getch();
}


