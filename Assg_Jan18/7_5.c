#include<stdio.h>
int main()
{
    int n, i, s = 0;
    printf("\nEnter value of n:");
    scanf("%i", &n);
    for(i = 1; i <= n; i++)
        s+=2*i;
    printf("\nS = %i\n",s);
    return (0);    
}
