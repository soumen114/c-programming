#include<stdio.h>
int n;
int chem(int);
int phy(int);
int math(int);
int com(int);
void main()
{
    printf("Enter the integer value of the day- ");
    scanf("%d",&n);
    switch(n)
    {
        case 0:
        {
            chem(n);
            break;
        }
        case 1:
        {
            phy(n);
            break;
        }
        case 2:
        {
            math(n);
            break;
        }
        case 3:
        {
            com(n);
            break;
        }
        case 4:
        {
            phy(n);
            break;
        }
        case 5:
        {

          math(n);
          break;
        }
        case 6:
        {
            com(n);
            break;
        }
        defalt:
        	{
        		printf("invaild input");
			}
    }

}
int chem(n)
{
    printf("Chemistry");
}
int phy(n)
{
    printf("Physics");
}
int com(n)
{
    printf("Computer");
}
int math(n)
{
    printf("Mathematics");
}
