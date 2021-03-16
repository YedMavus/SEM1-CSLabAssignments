#include<stdio.h>
int main()
{
    printf("\nEnter a character:");
    char c, ch;
    scanf("%c", &ch);
    c = ch;
    if (c>= 65 && c <= 90)
        c+=32;
    else if (c>= 90 && c <= 122)
        c-=32;
    
    printf("\n%c is %c.\n",ch, c);
    return(0);
}
