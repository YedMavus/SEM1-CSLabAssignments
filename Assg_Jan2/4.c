#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c, x1,x2;
    printf("\nEnter the values of constants in correct order:\n");
    scanf("%f %f %f",&a,&b,&c);
    x1=(-b + pow( b*b-4*a*c,0.5 ) ) / 2*a;
    x2=(-b - pow( b*b-4*a*c,0.5 ) ) / 2*a;
    printf("\nthe value of x1=%f and the value of x2=%f\n",x1,x2);

    return (0);
}
