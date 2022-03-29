#include<stdio.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
int div(int,int);
int a,b,c,n,again;

void main()
{
	printf("enter your first number =");
	scanf("%d",&a);
	printf("enter your second number =");
	scanf("%d",&b);
	printf("addition-1\n substruction-2\n multification-3\n division-4\n");
	printf("choose your option ");
	scanf("%d",&n);
	if(n==1)
	{
		c=add(a,b);
		printf("%d",c);
	}
	else if(n==2)
	{
		c=sub(a,b);
		printf("%d",c);
	}
	else if(n==3)
	{
		c=mult(a,b);
		printf("%d",c);
	}
	else if(n==4)
	{
		c=div(a,b);
		printf("%d",c);
	}
	else
	{
		printf("invalid number");
	
	}
	printf("\n press y to again use it and n to exit ");
	scanf(" %c",&again);
	if(again=='y')
	{
		main();	
	}
	else if(again=='n')
	{
		exit(0);
	}
	
	}
	int add(int a,int b)
	{
		a+=b;
		return a;
	}
	int sub(int a,int b)
	{
		a-=b;
		return a;
	}
	int mult(int a,int b)
	{
		a*=b;
		return a;
	}
	int div(int a,int b)
	{
		a/=b;
		return a;
	}
