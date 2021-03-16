#include<stdio.h>
int main()
{
    char ch;
    do
    {
        printf("\nEnter single character:");
        
        scanf("%c", &ch);
        if (ch<97 || ch > 122)
        {
            printf("\nUsage: $ (character in lowercase)\n\nTry again\n");
            ch = -1;
        }
    }
    while (ch <0);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("\nVowel!\n");
        else
            printf("\nConsonant!\n");
        return(0);
}
