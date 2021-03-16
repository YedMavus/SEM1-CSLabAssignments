#include<stdio.h>
int fibo (int n);
int main()
{
    int n;
    printf("\nEnter how many Fibonacci terms to be displayed?:");
    scanf("%i",&n);
    printf("\n");
    for(int i = 0; i < n; i++)
    {
        printf(" %i", fibo(i));
    }
    printf("\n");
    return(0);
}

int fibo (int n)
{
    if (n == 0)
        return (0);
    else if (n == 1)
        return (1);
    else
        return (fibo(n-1)+fibo(n-2));
}
    
