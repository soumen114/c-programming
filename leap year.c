#include<stdio.h>
int main()
{
int year;
printf("enter a year");
scanf("%d",&year);
if(year%100==0)
{
	if ( year%400==0)
	{
		printf("year is leap year");
	}
	else
	{
	printf("year is not leap year");
	
	}
}  
else if ( year%4==0)
{
	printf(" year is a leap year");	
}
else
{ 
printf("year is not a leap year");
}
}
