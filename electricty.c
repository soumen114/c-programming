#include<stdio.h>
int main()
{
	int unit,amt, total_amt,gstcharge;
	printf("enter total units comsumed:");
	scanf("%d",&unit);
	
		if( unit<=50)
		{
			amt=unit*5;
		}
		else if( unit<=100)
		{
			amt=250+((unit-50)*7);
		}
		else if(unit<=500)
		{
			amt=600+((unit-100)*10);
			
		}
		else if( unit<=1000)
		{
			amt=4600+( unit-500)*12;
			
		}
		else if(unit>=1000)
		{
			amt=10600+( unit-1000)*15;
		}
		gstcharge=(amt*7)/100+(amt*11)/100;
		total_amt= amt+gstcharge+100;
		printf("elcetricity bill=%d",total_amt);
		
	
}



