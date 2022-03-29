#include<stdio.h>
#include<string.h>

char s[20],d[20];
void main()
{
	printf("enter a name");
	gets(d);
	printf("enter a name");
	gets(s);
	strcmp(d,s);
	puts(d);
	puts(s);
	
}
