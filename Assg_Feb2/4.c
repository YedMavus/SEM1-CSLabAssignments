#include<stdio.h>
int arraymax(int A[][20], int n,  int m)
{
    int max = A[0][0];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(A[i][j]>max)
                max = A[i][j];
        }
        return max;
}
    
int main()
{
    int A[20][20],n,m;

    printf("Enter array dimentions:");
    scanf("%i %i",&n,&m);
    printf("\nEnter the numbers:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf("%i", &A[i][j]);
        }
    printf("\nLargest number is %i.\n",arraymax(A,n,m));
    return (0);
}

    
