#include<stdio.h>
int main()
{
    int n, i, s = 0;
    printf("\nEnter value of n:");
    scanf("%i", &n);
    for(i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            s += i*(-1);
            printf("\n%i Even\n",i);
        }
        else
        {
            s += i;
            printf("\n%i Odd\n",i);
        }
    }
    printf("\nS = %i\n",s);
    return (0);    
}
