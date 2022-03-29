#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("test.txt","w");
	fprintf(fp,"this is our firs file\n");
	fclose(fp);
}
