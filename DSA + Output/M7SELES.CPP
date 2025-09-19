//Program for selection sort
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100], n, i, j, minIndex, temp;
	clrscr();
	printf("\n Enter the number of elements in an array:");
	scanf("%d",&n);
	printf("\n Enter the elements in array: ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	//Selection sort algorithm
	for(i=0;i<n-1;i++)
	{
		minIndex = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;
			}
		}
		if(minIndex != i)
		{
			temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
		}
	}
	printf("Sorted Array after Selection Sort: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	getch();
}