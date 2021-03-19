/*Write a C program to copy one existing file (source file, say file1.txt) into another named file (destination
file, say file2.txt). In this case take file name as input through command line argument. As for example:
$./a.out file1.txt file2.txt
Here the contents of file1.txt have to be copied to file2.txt.*/
#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Usage: cp source dest\n");
        return 1;
    }


    FILE* source = fopen(argv[1], "r");
    if (source == NULL)
    {
        printf("cp: %s: No such file\n", argv[1]);
        return 1;
    }


    FILE* dest = fopen(argv[2], "w");
    if (dest == NULL)
    {

        fclose(source);
        printf("cp: %s: Cannot open file for writing\n", argv[2]);
        return 1;
    }


    for (int c = fgetc(source); c != EOF; c = fgetc(source))
    {
        putc(c, dest);
    }


    fclose(source);
    fclose(dest);
}
