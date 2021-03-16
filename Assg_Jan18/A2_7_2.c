#include<stdio.h>
int main()
{
    int x,n, i,j, s = 0, p;
    printf("\nEnter value of x and n:");
    scanf("%i %i",&x, &n);
    for(i = 0; i<n; i++)
    {
        p = 1;
        for (int j = 0; j< i; j++)
    {
        p = x*p;
    }
        s = s + p;
    }
    printf("\nSum = %i\n", s);
    return (0);
}
