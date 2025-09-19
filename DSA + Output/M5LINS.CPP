 //Program for linear searching
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
	int arr[100], n, i, target, found=0;
	clrscr();
	printf("\n Enter the number of elements in an array:");
	scanf("%d",&n);
	printf("\n Enter the elements in array: ");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to be searched: ");
	scanf("%d",&target);
	//linear search algorithm
	for(i=0;i<n;i++)
	{
		if(arr[i]==target)
		{
			printf("Element %d found at index %d\n",target,i);
			found = 1;
			break;
		}
	}
	if(!found)
	{
		printf("Element %d not found in the array.\n",target);
	}
	getch();
	return 0;
 }