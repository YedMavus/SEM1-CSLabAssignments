#include<stdio.h>
#include<math.h>
int main()
{
    float c,f;
    printf("\nPlease enter the Temperature in degree F:");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("\nTemp. in degree C is %f\n", round(c));
    return(0);
}
 
