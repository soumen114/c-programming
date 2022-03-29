#include<stdio.h>
#include<string.h>

char d[20],s[20];
void main()
{
	printf("enter a name");
	gets(d);
	strcpy(s,d);
	puts(s);
}
