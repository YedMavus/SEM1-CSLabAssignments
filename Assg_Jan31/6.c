#include<stdio.h>
int main()
{
    int A[20][20], B[20][20], C[20][20],n,m;
    printf("\nEnter array dimention[x X y]:");
    scanf("%i %i",&n,&m);
    printf("\nEnter elements of array A:\n");
    //input two matrices
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            scanf("%i", &A[i][j]);
    printf("\nEnter elements of array B:\n");
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            scanf("%i", &B[i][j]);
    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            C[i][j] = A[i][j] + B[i][j];
    printf("\nElements of Summed up array:\n");
    //output
    for(int i = 0; i<n; i++)
    {
        printf("\n");
        for(int j = 0; j<m; j++)
            printf("%i ", C[i][j]);
    }
    printf("\n");
    return(0);
}
