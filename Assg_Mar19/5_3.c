/*
Declare a structure for storing complex numbers. Write a C program that perform the following operations:
a) Read two complex numbers (a+ib). b) add of two complex numbers. c) subtract two complex numbers.
d) multiply two complex numbers.
*/
#include<stdio.h>
struct complex 
{
    int x;
    int y;
}c1,c2;
//complex in current definition can take only integers, but can be switched to take float, by changing int to float

int main()
{
    //a)
    printf("\nEnter values of x and y of complex number 1:");
    scanf("%i %i", &c1.x, &c1.y);
    printf("\nEnter values of x and y of complex number 2:");
    scanf("%i %i", &c2.x, &c2.y);
    //b)
    printf("\nComplex1 + Complex2 = %i + i %i\n", (c1.x+c2.x), (c1.y+c2.y));
    //c)
    printf("\nComplex1 - Complex2 = %i + i %i\n", (c1.x-c2.x), (c1.y-c2.y));
    //d)
    printf("\nComplex1 X Complex2 = %i + i %i\n", (c1.x*c2.x)-(c1.y*c2.y), (c1.y*c2.x+c1.x*c2.y));
    return(0);
}
