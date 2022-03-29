#include<stdio.h>

void main()
{
int num1, num2, cal; 
char ope; 

printf("Enter First Number");
scanf("%i", &num1); 

printf("Enter Second Number");
scanf("%i", &num2); 

printf("Choose Any Operator: +  | - | / | * \n");
scanf(" %c", &ope); 

 
 if(ope == ' + ')
 {
  cal= num1 + num2;
  printf("Addition of two numbers is: %i",cal);
 }

 else if(ope == ' - ')
 {
  cal= num1 - num2;
  printf("Subtraction of two numbers is: %i",cal);
 }
  
 else if(ope == ' / ')
 {
  cal= num1 / num2;
   printf("Division of two numbers is: %i",cal);
 }
  
 else if(ope == ' *' )
 {
  cal= num1 * num2;
  printf("Multiplication of two numbers is: %i",cal);
 }
  
 else
 {
 printf("Invalid Input"); 
 }

}
