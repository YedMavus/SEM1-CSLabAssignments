#include<stdio.h>

int main()
{
    float x,y, s;
    printf("\nPlease enter value of x and y [must belong in R]");
    scanf("%f%f",&x, &y);
    s = 5*x*x*x + 4*x*x*y*y + 4*y*y*y + 30;
    printf("\nExpression = %f\n", s);
    return(0);
}
 
