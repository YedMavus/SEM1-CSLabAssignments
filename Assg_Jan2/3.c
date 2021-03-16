#include<stdio.h>
#include<math.h>
int main()
{
    float c,f;
    char ch;
    printf("\nEnter conversion format[to deg C or F?]:");
    scanf("%c", &ch);
    if(ch=='F')
    {
        printf("\nPlease enter the Temperature in degree C:");
        scanf("%f",&c);
        f = (9*c/5)+32;
        printf("\nTemp. in degree F is %f\n", f);
    }
    else if (ch == 'C')
    {
        printf("\nPlease enter the Temperature in degree F:");
        scanf("%f",&f);
        c = (f-32)*5/9;
        printf("\nTemp. in degree C is %f\n", round(c));
    }
    return(0);
}
 
