#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,c,d;
  float root1,root2;  
 
  printf("\nEnter quadratic equation in the format ax^2+bx+c: ");
  scanf("%d %d %d",&a,&b,&c);
   
  d = pow(b,2) - 4 * a * c;
  
  if(d < 0)
  {
    printf("Roots are complex number.\n");
   
  }
  else
  {
  
 
   root1 = ( -b+sqrt(d)) / (2*a);
   root2 = ( -b-sqrt(d)) / (2*a);
   printf("Roots of quadratic equation are: %f , %f",root1,root2);
}
  
}
