#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
#include<conio.h>
void Merge(int arr[],int left,int mid,int right)
{
	int i,j,k;
	int size1=mid-left+1;
	int size2=right-mid;
	int Left[MAX_SIZE],Right[MAX_SIZE];
	for(i=0;i<size1;i++) Left[i]=arr[left+i]; for(j=0;j<size2;j++) Right[j]=arr[mid+1+j];
	i=0; j=0; k=left;
	while(i<size1 && j<size2)
	{
		if(Left[i]<=Right[j])
		{
			arr[k]=Left[i]; i++;
		}
		else
		{
			arr[k]=Right[j]; j++;
		}
		k++;
	}
	while(i<size1)
	{
		arr[k]=Left[i]; i++;
		k++;
	}
	while(j<size2)
	{
		arr[k]=Right[j]; j++; k++;
	}
}
void Merge_Sort(int arr[],int left,int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2; Merge_Sort(arr,left,mid);
		Merge_Sort(arr,mid+1,right);
		Merge(arr,left,mid,right);
	}
}
int main()
{
	clrscr();
	int arr[MAX_SIZE];
	int size,i;
	printf("Enter the size of array: ",MAX_SIZE);
	scanf("%d",&size);
	if(size>MAX_SIZE)
	{
		printf("Size exceeds the maximum limit of %d \n",MAX_SIZE);
		return 1;
	}
	printf("Enter the element of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	Merge_Sort(arr,0,size-1);
	printf("The sorted array is:\n");
	for(i=0;i<size;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	getch();
	return 0;
}
