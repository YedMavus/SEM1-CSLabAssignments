#include<stdio.h>
int subs(char s1[], char s2[]);
int main()
{
	char s1[100],s2[100];
	printf("Enter the original string and string to be searched: ");
	gets(s1);
	gets(s2);
	int T=subs(s1,s2);
	if(T==1)
		printf("\nString was found.\n");
	else
		printf("\nString was not found.\n");
	return 0;
}
int subs(char s1[], char s2[])
{
	
	int i=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	int n=i;
	for(int i=0;i<n;i++)
	{
		if(s1[i]==s2[0])
		{
			int j=1,f=1;
			while(s2[j]!='\0'&&f!=0&&(i+j)<n)
			{
				if(s2[j]==s1[i+j])
					j++;
				else
					f=0;
			}
			if(f==1)
				return 1;
		}
	}
	return 0;
}
