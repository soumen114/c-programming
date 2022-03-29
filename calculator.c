#include<stdio.h>
void main()
{
int num1, num2, cal; 
char ope, again; 

printf("Enter First Number");
scanf("%d", &num1); 

printf("Enter Second Number");
scanf("%d", &num2); 

printf("Choose Any Operator: +  | - | / | * \n");
scanf(" %c", &ope); 

 
 if(ope == '+')
 {
  cal= num1 + num2;
  printf("Addition of two numbers is: %d",cal);
 }

 else if(ope ==  '-')
 {
  cal= num1 - num2;
  printf("Subtraction of two numbers is: %d",cal);
 }
  
 else if(ope == '/')
 {
  cal= num1 / num2;
   printf("Division of two numbers is: %d",cal);
 }
  
 else if(ope == '*' )
 {
  cal= num1 * num2;
  printf("Multiplication of two numbers is: %d",cal);
 }
  
 else
 {
 printf("Invalid Input"); 
 }


printf("\npress y to again use it and n to exit");
scanf(" %c",&again);	

if(again=='y')
{
	main();
}
else if(again=='n')
{
	exit(0);
}
}












