#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nPlease enter the 3 numbers to be added:");
    scanf("%i%i%i",&a,&b,&c);
    int s;
    s = a + b + c;
    printf("\n%i + %i + %i = %i\n", a,b,c,s);
    return(0);
}

