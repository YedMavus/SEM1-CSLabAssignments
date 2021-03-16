#include<stdio.h>
#define pi 3.14
int main()
{
    float r, p, a;
    printf("\nPlease enter the radius:");
    scanf("%f",&r);
    p = 2 * pi * r;
    a = pi * r * r;
    printf("\nArea of circle = %f\nCircumference = %f\n", a,p);
    return(0);
}
 
