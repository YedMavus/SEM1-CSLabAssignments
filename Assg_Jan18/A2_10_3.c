#include<stdio.h>
int main()
{
    int height, l=1;
    printf("\nEnter number of lines:");
    scanf("%i", &height);
    for (int i = 0; i < height; i++)
    {
        for (int k = height - i; k > 1  ; k--)
        {
            printf("   ");
        }
        for (int j = 0; j <= (2*i ); j++)
        {
            printf(" %i ", l);
            l++;
        }
        printf("\n");
    }
    return(0);
}
