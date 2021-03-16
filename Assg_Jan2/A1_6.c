#include<stdio.h>

int main()
{
    float x, s;
    printf("\nPlease enter value of x [must belong in R]");
    scanf("%f",&x);
    if (x>50)
    {
        s = 3 * x + 1;
    }
    else if(x>=30 && x<=50)
    {
        s = 2 * x * x + 3;
    }
    else if (x<30 && x > 0 )
    {
        s = 5 * x*x*x - 6;
    }
    else
    {
        s = 0;
    }
    printf("\nExpression = %f\n", s);
    return(0);
}
 
