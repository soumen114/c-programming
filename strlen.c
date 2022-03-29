#include<stdio.h>
#include<string.h>
int n=0;
char d[20];
void main()
{
	printf("enter a string");
	gets(d);
	n=strlen(d);
	printf("%d",n);
}
