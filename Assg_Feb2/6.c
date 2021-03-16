#include<stdio.h>

int reverseInteger(int n)
{
    int rev = 0;
    while(n>0)
    {
        rev = rev*10 + (n%10);
        n = n/10;
    }
    return rev;
}
int main()
{
    int A;
    printf("\nEnter:");
    scanf("%i", &A);
    printf("\n Int = %i \n Rev = %i\n", A, reverseInteger(A));
    return(0);
}
