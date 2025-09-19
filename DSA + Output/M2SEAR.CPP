//Program of search operation to search an element in an array
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, item, i, j=0, arr[40];
    clrscr();
    printf("\n Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("\n Enter the elements in array: ");
    for(i=0;i<n;i++)
    {
	printf("\n arr[%d] = ",i);
	scanf("%d",&arr[i]);
    }
    printf("\n Element to be searched = ");
    scanf("%d",&item);
    while(j<n)
    {
	if(arr[j]==item)
	{
		printf("\n Element %d found at index %d\n",item,j);
		break;
	}
	j++;
    }
    if(j==n)
    {
	printf("\n Element %d not found in the array",item);
    }
    getch();
    return 0;
}