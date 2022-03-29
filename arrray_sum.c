#include<stdio.h>
int a[10],i,n,sum;
int main()
{
	printf("enter size of elements:");
	scanf("%d",&n);
	printf("size of elements are:");
	for(i=0;i<n;i++)
	{
		printf("\n%d index=",i);
		scanf("%d",&a[i]);
	}
	printf("\narray are:");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	for(i=0;i<n;i++)
	{
	sum+=a[i];
	}
	printf("\nsum of array=%d",sum);
	
}
	
