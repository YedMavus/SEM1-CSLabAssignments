#include<stdio.h>

int main()
{
    float x, s;
    printf("\nPlease enter value of x [must belong in R]");
    scanf("%f",&x);
    s = 4*x*x + 2*x + 10;
    printf("\nExpression = %f\n", s);
    return(0);
}
 
