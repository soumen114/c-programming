#include<stdio.h>
#include<string.h>
char str[50];
void main()
{
	FILE *fp;
	Printf("enter a string-");
	gets(str);
	fp=fopen("write.text","w");
	fputs(str,fp);
	printf("%s",str);
}
