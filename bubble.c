// BUBBLE SORT
#include<stdio.h>
int main()
{
	int arr[10],i,j,n,temp;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}	
	}
	printf("\nArray elements after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
