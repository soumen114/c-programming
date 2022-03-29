#include<stdio.h>
#include<string.h>
int n=0;
char s[20],d[20];
void main()
{
	printf("enter a name");
	gets(d);
	printf("enter a name");
	gets(s);
	n=strcmp(s,d);
	printf("%d",n);
}
