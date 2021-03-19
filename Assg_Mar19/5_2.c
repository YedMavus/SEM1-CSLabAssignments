/*Write a C function “int reverseIntger(int n)”, that returns the reverse of n, that is, the returned integer
(in decimal) contains the same decimal digits as n, but in reverse order. Write a complete C program to
demonstrate that the function you have written works as desired.*/
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
