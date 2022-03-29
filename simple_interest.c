#include<stdio.h>
int main()
{
	int p,t;
	float r,si;
	printf("enter principle,rate and time:");
	scanf("%d%f%d",&p,&r,&t);
	si=p*r*t/100;
	printf("\n simple interest:%f",si);
}
