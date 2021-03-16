#include<stdio.h>
int main()
{
	int A[4], B[4],n;
	printf("Enter array dimention:");
	scanf("%i",&n);
	printf("Enter elements:");
		for(int k = 0; k < n ; k ++)
		{
			scanf("%i", &A[k]);
		}
		int c;
		do
		{
			c = 0;
			for(int j = 0; j<n; j++)	
				if(A[j]>A[j+1])
				{
				int temp;
				temp = A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				c++;
				}
		}
		while(c>0);
		for(int j = 0; j < n ; j ++)
		{
			printf("%i ", A[j]);
		}
		printf("\n");
	return(0);
}
