//Program for binary search
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100], n, i, target;
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
	printf("Enter the value to search:");
	scanf("%d",&target);
	//binary search algorithm
	int beg=0, end=n-1, mid, found=0;
	while(beg <= end)
	{
		mid = beg + (end-beg)/2;
		if(arr[mid]==target)
		{
			printf("Element %d found at index %d\n",target,mid);
			found = 1;
			break;
		}
		else if(arr[mid] < target)
		{
			beg = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	if(!found)
	{
		printf("Element %d not found in the array:\n",target);
	}
	getch();
}