#include<stdio.h>
int main()
{
	int a,b,c;
	printf("maximum number");
	scanf("%d%d%d",&a,&b,&c);
	if((( a>b) &&(a>c))||( b>a))
	{
		printf("a maximum number");
	}
	else
	{
		printf("b maximum number");
	}
	}
