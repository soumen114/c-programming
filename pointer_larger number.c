#include <stdio.h>

int* larger(int*, int*);

void main()
{
    int a;
    int b;
    printf("enter a first number=");
    scanf("%d",&a);
    printf("enter a second number=");
    scanf("%d" ,&b);
	    int *p;
    p = larger(&a, &b);
    printf("%d is larger",*p);
}

int* larger(int *x, int *y)
{
    if(*x > *y)
        return x;
    else
        return y;
}
