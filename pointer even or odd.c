#include<stdio.h>
int n;
int main()
{
	printf("enter a number");
	scanf("%d",&n);
	int*p=&n;
	if(*p%2==0)
	printf("number %d is even",*p);
	else
	printf("number %d is odd",*p);
	
}
