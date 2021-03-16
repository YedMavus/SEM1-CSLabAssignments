#include<stdio.h>
int main()
{
    
    int A[20], B[100][2],n,i,j,k=0;
    int inb (int C)
    {
        for (int l = 0; l<k; l++)
            if(B[l][0] == C)
                return 0;
            return 1;
    }
    printf("Enter array dimention:");
    scanf("%i",&n);
    
    printf("Enter elements:");
    for(j = 0; j < n ; j ++)
    {
        scanf("%i", &A[j]);
        B[j][0] = -1;
        B[j][1] = 0;
    }
    for(i = 0; i < n ; i ++)
    {
        for(j = 0; j<n ; j++)
        {
            if(A[i] == A[j] && i != j && inb(A[i]))
            {
                B[k][0] = A[i];
                B[k][1]++;
                k++;
            }
        }
    }
    int max=B[0][1];
    for(i = 0; i<k;i++)
    {
        if(max<B[i][1])
            max = B[i][1];
    }
    for(i =0; i<k;i++)
        if(B[i][1]==max)
            printf("\nMax occurences of %i occured.\n", B[i][0]);
        
    printf("\nNumber of repeated elements is %i\n",k);
    return 0;
}
