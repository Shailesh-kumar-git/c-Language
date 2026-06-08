// 12.Write a program to check whether a character is an 
//   alphabet, digit or special character

#include <stdio.h>

int main()
{
    char c;
    while (1)
    {
        printf("enter any charecter : ");
        scanf(" %c", &c);
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            printf("it is an alphabet = %d",c);
        }
        else if (c >= '0' && c <= '9')
        {
            printf("it is a digit = %d",c);
        }
        else
        {
            printf("special character = %d",c);
        }
        printf("\n");
    }
    return 0;
}