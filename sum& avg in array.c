#include<stdio.h>
int main()
{
	int n,avg,sum=0,i;
	printf("enter your number=");
	scanf("%d" ,&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
      {
      	sum=sum+arr[i];
	  }
	  avg=sum/n;
	  printf("average is %d",avg);
	  printf("\n the sum is %d",sum);
}
