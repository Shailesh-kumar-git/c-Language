//  11.Write a program to check whether a character is uppercase
//    alphabet or lowercase alphabet or not alphabet.
#include <stdio.h>

int main()
{
    char c;
    while (1)
    {
        printf("enter any charecter : ");
        scanf(" %c", &c);
        if (c >= 'A' && c <= 'Z')
        {
            printf("it is an upper case = %d",c);
        }
        else if (c >= 'a' && c <= 'z')
        {
            printf("it is an lower case = %d",c);
        }
        else
        {
            printf("not an alphabet = %d",c);
        }
        printf("\n");
    }
    return 0;
}