#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the Elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	int c=0,index=0;
	for(int i=1;i<n;i++)
	{
		if(arr[index]==arr[i])
		{
			c++;
			while(arr[index]==arr[i])
				i++;
		}
		index=i;
	}
	printf("\nNo. of Repititions is: %d", c);
	return(0);
}
