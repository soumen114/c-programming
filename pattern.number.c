#include<stdio.h>

int i,j;
void main()
{
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2*i;j++)
		{
		
		if(j%3!=0)
	     	{
			printf("%3d",j);
			}
		}
	printf("\n");
	} 
	
}
