#include<stdio.h>
int main()
{
	int year;
	printf( "enter a year");
	scanf("%d",&year);
	if(((year%100==0)&&( year%400==0 ))||(year%4!=0))
	{
		printf("year is a leap year");


		
	}
	else
	{
		printf("not leap year");
	}
}

