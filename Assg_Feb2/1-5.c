#include<stdio.h>
void notspace(char aj[],char mj[])
{
    int i = 0, j = 0;
    while(aj[i] != '\0')    // till string doesn't terminate
    {
        if(aj[i] != ' ')  // if the char is not a white space
        {
            
            mj[j++] = aj[i];
        }
        i++;
    }
    mj[j] = '\0';
    printf("\n\nThe string after removing all the spaces is: %s\n", mj);

}
    
int main()
{
    char aj[100], mj[100];


    printf("\n\nEnter the string: ");
    gets(aj);


    notspace(aj,mj);
    
    return 0;
}
