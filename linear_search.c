#include<stdio.h>
int main()
{
	int a[50],i,n,size;
	printf("enter size of element:");
	scanf("%d",&n);
	printf("enter size of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a element u want a search:");
	scanf("%d",&size);
	for(i=0;i<n;i++)
	if(a[i]==size)
	break;
	if(i<size)
	printf("element found at index=%d",i);
	else
	printf("element not found");
	
}
