#include<stdio.h>
int a[10],i,n;
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
	printf("\nbefore reverse array are:");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nafter reverse array are:");
	for(i=n-1;i>=0;i--)
	{
		printf("%5d",a[i]);
	}

}
