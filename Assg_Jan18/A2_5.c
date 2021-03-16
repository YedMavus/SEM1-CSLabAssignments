#include<stdio.h>
int main()
{
    int x,y, p;
    p = 1;
    printf("\nEnter values of x and y:");
    scanf("%i %i", &x, &y);
    for (int i = 0; i< y; i++)
    {
        p = x*p;
    }
    printf("\nProduct is %i\n", p);
    return (0);
}
