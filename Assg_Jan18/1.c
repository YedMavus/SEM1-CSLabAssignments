#include<stdio.h>
int main()
{
    int A[3],i;
    printf("\nEnter the three numbers:");
    for(i = 0; i<3; i++)
    {
        scanf("%i", &A[i]);
    }
    int max = A[0];
    for(i=0;i<3;i++)
    {
        if(A[i]>max)
            max = A[i];
    }
    printf("\nLargest number is %i.\n",max);
    return (0);
}
