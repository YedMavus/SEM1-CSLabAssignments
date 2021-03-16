#include<stdio.h>
int main()
{
    int height,l;
    l=0;
    printf("\nEnter number of lines:");
    scanf("%i", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i ; j++)//loop
        {
            l++;
            printf("%i  ", l);
        }
        printf("\n");
    }
    return(0);
}
