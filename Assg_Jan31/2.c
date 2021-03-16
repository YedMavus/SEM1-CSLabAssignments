#include<stdio.h>
int main()
{
	int A[20], B[20],n;
	printf("Enter array dimention:");
	scanf("%i",&n);
	printf("Enter elements:");
		for(int j = 0; j < n ; j ++)
		{
			scanf("%i", &A[j]);
		}
		for(int j = 0; j < n ; j ++)
		{
			B[j] = A[j];
		}
		for(int j = 0; j < n ; j ++)
		{
			printf("%i ", B[j]);
		}
		printf("\n");
	return(0);
}
