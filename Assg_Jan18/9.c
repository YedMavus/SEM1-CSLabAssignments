#include<stdio.h>
int main()
{
    int i, s = 0;
    for(i = 20; i <= 30; i++)
        if(i % 2 == 0 && i % 3 == 0)
            s+=i;
    printf("\nS = %i\n",s);
    return (0);    
}
