#include<stdio.h>

int factroial(int n)
{
	
if(n==0)
{
	return 1;
	}	
	
int fact=factroial(n-1);
return n*factroial(n-1);
}

int main()
{
		int n,i;
		printf("enter a number:");
		scanf("%d",&n);
	
	int output=factroial(n);

	printf("fctroial of %d is %d\n", n, output);

}
