//Program for Bubble Sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100], n, i, temp;
	clrscr();
	printf("\n Enter the number of elements in an array:");
	scanf("%d",&n);
	printf("\n Enter the elements in array: ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	//Sorting array using bubble sort
	for(i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				//swap
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Sorted array after Bubble Sort: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	getch();
}