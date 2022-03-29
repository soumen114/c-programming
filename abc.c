
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("how many rows want you see\n");
	scanf("%D",&n);
		for(i=1;i<=n;i++)     
		{
			for(j=1;j<=n;j++)
			
			
			if(j>=n-(i-1) && j<=n+(i-1))
			{
				printf("*");
				
			} 
			else
			{ 
			printf(" ");
			
			}
			printf("\n");
		}
		
	
	{
		for(j=1;j<=2*n-1;j++)
	{
		printf("*");
		
		}	
		printf("\n");
		
	}
	
}
