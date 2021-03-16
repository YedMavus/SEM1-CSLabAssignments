//call Soham Chak about Drive pdf opening
#include<stdio.h>
int main()
{
    int height;
    printf("\nEnter number of lines:");
    scanf("%i", &height);
    for (int i = 0; i < height; i++)
    {
        for (int k = height - i; k > 1  ; k--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i ; j++)//loop
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
