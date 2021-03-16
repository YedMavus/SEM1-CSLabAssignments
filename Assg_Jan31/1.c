#include<stdio.h>
int main()
{
    int A[20],i,n;

    printf("Enter array dimention:");
    scanf("%i",&n);
    printf("\nEnter the numbers:");
    for(i = 0; i<n; i++)
    {
        scanf("%i", &A[i]);
    }
    int max = A[0], min = A[0];
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
            max = A[i];
        if(A[i]<min)
            min = A[i];
    }
    printf("\nLargest number is %i.\n",max);
    printf("\nSmallest number is %i.\n",min);
    return (0);
}
