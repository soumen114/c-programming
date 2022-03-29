#include<stdio.h>
int a[20],i,n,j,count=0;
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
	for(i=0;i<n;i++)
	{
		for(j=i+1;i<n;i++)
		{
		  if(a[i]==a[j])
		  
        	
		  count++;
	
	 else
		  break;
          
		}
	}
	printf("\nduplicate number=%d",count);

}
