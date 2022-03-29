#include<stdio.h>
float interest(float,float);
float p,y,r,amt,t;
void main()
{
	printf("enter the principle value ");
	scanf("%f",&p);
	printf("enter the year ");
	scanf("%f",&y);
	printf("enter the rate ");
	scanf("%f",&r);
	amt=interest(y,r);
	t=(amt*p);
	printf("interest is %f",t);
	
}
float interest( float y,float r)
{
	amt=(y*r)/100;
	return amt;
	
}
