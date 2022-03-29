#include<stdio.h>
int i=0,j=0;
void main()
{
    for(i=0;i<=4;i++)
    {
        if(i%2==0)
        {
        for(j=0;j<(4-i)/2;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i/2;j++)
        {
            if(j==i/2)
            {
                printf("*"); 
            }
            else{
                printf(" * ");
            }
        }
        for(j=0;j<(4-i)/2;j++)
        {
            printf(" ");
        }
        printf("\n");
        }
    }
}
