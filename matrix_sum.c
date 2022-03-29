#include<stdio.h>
void main()
{
	int m,n ,i,j,first[10][10],second[10][10],sum[10][10];
	printf("enter the number of rows and columns=\n");
	scanf("%d%d",&m, &n);
		printf("enter a first elements matrix\n");
		
     	for(i=0;i<m;i++)
    	for( j=0;j<n;j++)
    	scanf("%d",&first[i][j]);
      printf("\nenter a second elements matrix\n");
      
      for(i=0;i<m;i++)	
      for(j=0;j<n;j++)
      scanf("%d",&second[i][j]);
     printf("sum of matrix\n");
     
	 for(i=0;i<m;i++)
	  {
	    for(j=0;j<n;j++)
	 {
	   sum[i][j]=first[i][j] +second[i][j];	
	   printf("%d\t",sum[i][j]);
}
  
  printf("\n");
}

}
