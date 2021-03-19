/*Write a C function that takes input a two dimensional array of integers and find the largest number from
each row and column individually, store it in two corresponding one dimensional array respectively and
display it. Write the complete program to test the function.*/
#include<stdio.h>
int arraymax(int A[][20], int n,  int m)
{
    int R[n],C[m];
	for(int i=0;i<n;i++)
	{	
		int max=A[i][0];
		for(int j=1;j<m;j++)
			if(A[i][j]>max)
				max=A[i][j];
		R[i]=max;
	}
	for(int j=0;j<m;j++)
	{	
		int max=A[0][j];
		for(int i=1;i<n;i++)
			if(A[i][j]>max)
				max=A[i][j];
		C[j]=max;
	}
	for(int i=0;i<n;i++)
		printf("\n Largest Number in Row %i: %i", (i), R[i]);
	for(int i=0;i<m;i++)
		printf("\n Largest Number in Column %i: %i", (i), C[i]);
    printf("\n");
}
    
int main()
{
    int A[20][20],n,m;

    printf("Enter matrix dimentions:[mXn]");
    scanf("%i %i",&n,&m);
    printf("\nEnter the numbers:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            scanf("%i", &A[i][j]);
        }
    arraymax(A,n,m);
    return (0);
} 
