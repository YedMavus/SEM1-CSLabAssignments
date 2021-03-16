#include<stdio.h>
int main()
{
    printf("\nEnter a character:");
    char c;
    scanf("%c", &c);
    c++;
    printf("\nNext is %c. ASCII is %i.\n", c,(int)c);
    return(0);
}
