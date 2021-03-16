#include<stdio.h>
float fact (float f)
{
    if(f == 0)
        return(1);
    else
        return(f * fact (f-1));
}
int main()
{
    float x, s = 0.0;
    int i, j, p, n;
    printf("\nEnter value of x and n:");
    scanf("%f %i",&x, &n);
    for(i = 0; i<n; i++)
    {
        p = 1;
        for (int j = 0; j< i; j++)
    {
        p = x*p;
    }
        s = s + (float) p/fact(i);
    }
    printf("\nSum = %f\n", s);
    return (0);
}
