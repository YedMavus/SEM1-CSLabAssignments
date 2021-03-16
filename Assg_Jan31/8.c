#include<stdio.h>
int main()
{
    int A[20][20],n,s=0,t=0,d=0, v=0;
    printf("\nEnter array dimention:");
    scanf("%i",&n);
    printf("\nEnter elements of array A:\n");
    //input two matrices
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
            scanf("%i", &A[i][j]);
    for(int i = 0; i<n; i++)
        for(int j = 0; j<n; j++)
        {
            if(A[i][j]==A[j][i])
                s++;
            if(i<j && A[i][j]==0)
                t++;
            if(i!=j && A[i][j] == 0)
                d++;
            if(i == j)
                v += A[i][j];
            if(i == n - j - 1)
                v += A[i][j];
        }
    if(s == n*n)
        printf("\nSymmetric\n");
    if(t == n*(n-1)/2)
        printf("\nLower Triangular\n");
    if(d == n*(n-1))
        printf("\nDiagonal\n");
    
    printf("\n Diagonal Sum = %i\n",v);
    return(0);
}
