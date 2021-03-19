/*
Write a C program that can compare two files specified by the user. return a nonzero value if identical
otherwise zero. (such as $cmp file1.txt file2.txt; compare the content of file1.txt and file2.txt if identical
display 1 otherwise 0.)
*/
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Usage: cp source dest\n");
        return 1;
    }

   
    FILE* first = fopen(argv[1], "r");
    if (first == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }

    
    FILE* second = fopen(argv[2], "r");
    if (second == NULL)
    {
     
        fclose(first);
        printf("cp: %s: Cannot open file for writing\n", argv[2]);
        return 1;
    }


    int flag = 0;
    for (int d = fgetc(second), c = fgetc(first); c != EOF || d != EOF; c = fgetc(first), d = fgetc(second))
    {
        if(c != d)
        {flag++; break;}
    }

    if(flag>0)
    printf("\n 0\n");
    else 
        printf("\n 1\n");
    fclose(first);
    fclose(second);
}
