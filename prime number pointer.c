#include<stdio.h>
int n,i;
void main()
{
	printf("enter a number");
	scanf("%d",&n);
	prime_number(&n);
	return 0;
	
}

prime_number(int *p)
{
	for(i=2;i<=*p/2;i++)
	{
		if(*p%i==0)
		{
			break;
		}
	}
	if(i>*p/2)
	printf("\n%d is a prime number",*p);
	else
	printf("\n%d is not a prime number",*p);
}
