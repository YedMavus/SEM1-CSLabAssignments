#include<stdio.h>

float xpow(float x, int n)
{
    float P = 1;
    while(n>0)
    {
        P = P * x;
        n--;
    }
    return P;
    
}
int main()
{
    float x;
    int n;
    printf("\nEnter x and n respectively:");
    scanf("%f %d",&x,&n);
    printf("\nThe power x^n is %f\n", xpow(x,n));
    return(0);
    
}

