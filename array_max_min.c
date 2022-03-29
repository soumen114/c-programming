#include<stdio.h>
int a[20],i,n,max,min;
int main()
{
	printf("enter size of element:");
	scanf("%d",&n);
	printf("\nsize of element array are:");
	for(i=0;i<n;i++)
	{
		printf("\nindex[%d]=", i);
		scanf("%d" ,&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
		for(i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
			
		}
		printf("\nmaximam number=%d",max);
		printf("\nminimum number=%d",min);
}
