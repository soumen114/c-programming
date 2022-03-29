#include<stdio.h>
void main()
{
	int a[10],size,i;
	printf("enter size of array:");
	scanf("%d",&size);
	printf("enter elements of array:");
	for (i=0;i<size;i++) 
      {
      	scanf("%d",&a[i]);
      	
	  }
	  printf("enter elements of array are:");
	  for(i=0;i<size;i++)
	  {
	  	printf("%d\n",a[i]);
	  }
	  
}
