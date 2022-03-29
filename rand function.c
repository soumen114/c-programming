#include<stdio.h>
#include<time.h>
int a,r;
void main()
{
	printf("guess the number");
	time_t t;
	srand((unsigned) time(&t));
	r=rand()%20;
	printf("\n enter a number between 0 to 20");
	scanf("%d",&a);
	if(r==a)
	{
		printf("your guess is right");
	}
	else
	{
		printf("your guess is wrong \n right answeer is %d",r);
	}
}



