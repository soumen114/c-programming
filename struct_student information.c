#include<stdio.h>
struct student
{
	char name[50];
	int age ;
};
void main()
{
	int i,n;
	struct student s[100];
	printf("enter a total of  students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter information of students:%d\n",i+1);
		printf("enter name:");
		scanf(" %s",&s[i].name);
		printf("enter age:");
		scanf(" %d",&s[i].age);
	}
	printf("displaying information:\n");
	for(i=0;i<n;i++)
	{
		printf("%d no.students info:\n",i+1);
		printf("\n name:%s\n",s[i].name);
		printf("\n age:%d\n",s[i].age);
	}
	
}
