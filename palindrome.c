#include<stdio.h>
#include<strings.h>
void main()
{
	char a[50],b[50];
	printf("enter a strings");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a ,b)==0)
	{

	printf("\n %s the strings are palindrome",a);
    }
	else
	{
	
	printf("the strings are not palindrome\n");
	
    }  
	
	
}
