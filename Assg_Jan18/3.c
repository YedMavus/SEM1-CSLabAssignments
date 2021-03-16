#include<stdio.h>
int main()
{
    int c,k, remainder;
    printf("\nEnter your integer:");
    scanf("%i", &k);
    printf("\n");
    c = 0;
    while (k != 0) {
        remainder = k % 10;
        c = c * 10 + remainder;
        k /= 10;
    }
    while (c>0)
    {
        k = c % 10;
        switch (k)
        {
            case 0 :    {printf("Zero ");  break;}
            case 1 :    {printf("One ");   break;}
            case 2 :    {printf("Two ");   break;}
            case 3 :    {printf("Three "); break;}
            case 4 :    {printf("Four ");  break;}
            case 5 :    {printf("Five ");  break;}
            case 6 :    {printf("Six ");   break;}
            case 7 :    {printf("Seven "); break;}
            case 8 :    {printf("Eight "); break;}
            case 9 :    {printf("Nine ");  break;}
            default :   {printf("\nWrong input\n"); return(1);}
        }
        c = c/10;
    }
    printf("\n");
    return(0);
}
