#include<stdio.h>
void main()
{
	int c,vowels=0;
	char s[100];
	printf("enter a strings");
	gets(s);
	for( c=0;s[c];c++)
	
	 {
	 	if(s[c]=='a'||s[c]=='A'||s[c]=='e'||s[c]=='E'||s[c]=='i'||s[c]=='I'||s[c]=='o'||s[c]=='O'||s[c]=='u'||s[c]=='U')
	 	
	 	vowels++;
	 }
	 printf("\ntotal vowels are in the string=%d",vowels);

	
	
}
