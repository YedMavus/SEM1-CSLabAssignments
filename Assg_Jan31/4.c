#include<stdio.h>
int main()
{
    
    int A[20], B[10],n,i,j,k=0;
    int inb (int A)
    {
        for (int l = 0; l<k; l++)
            if(B[l] == A)
                return 0;
            return 1;
    }
    printf("Enter array dimention:");
    scanf("%i",&n);
    
    printf("Enter elements:");
    for(j = 0; j < n ; j ++)
    {
        scanf("%i", &A[j]);
        B[j] = -1;
    }
    for(i = 0; i < n ; i ++)
    {
        for(j = 0; j<n ; j++)
        {
            if(A[i] == A[j] && i != j && inb(A[i]))
            {
                B[k] = A[i];
                k++;
            }
        }
    }
    printf("\nNumber of repeated elements is %i\n",k);
    return 0;
}
