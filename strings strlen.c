#include<stdio.h>
#include<strings.h>
int n=0;
char s[10];
void main()
{
	printf("enter your name-");
	gets(s);
	n=strlen (s);
	printf("%d",n);
}
