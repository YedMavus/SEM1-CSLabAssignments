#include<stdio.h>
char reverse(char s[]);
int main()
{
	char s[100];
	printf("Enter the String: ");
	scanf("%s",s);
	reverse(s);
	printf("\nReversed String: %s", s);
	return 0;
}
char reverse(char s[])
{
	
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	int n=i;
	for(int i=0;i<n/2;i++)
	{
		int T=s[i];
		s[i]=s[n-1-i];
		s[n-1-i]=T;
	}
	return s;
}