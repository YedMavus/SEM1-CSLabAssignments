#include<stdio.h>
int sum(int A[],int n)
{
    int s = 0;
    for(int i = 0;i<n;i++)
    {
        s = A[i] + s;
    }
    return s;
}
int main()

{
    int A[10],n;
    printf("\nEnter size of array:");
    scanf("%i", &n);
    printf("\nEnter elements of array:");
    for(int i = 0; i<n; i++)
    {
        scanf("%i", &A[i]);
    }
    printf("\nSum = %i\n",sum(A,n));
    return 0;
}
