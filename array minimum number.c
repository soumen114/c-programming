#include<stdio.h>
void main()
{
	int arr [10],i,min;
	printf("elements of array are:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("minimum number in array=%d\n",min);
}
