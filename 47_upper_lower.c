/*  16.Write a program to check whether a character is an uppercase
so convert in lower case or lowercase so convert in uppercase char .  */

#include <stdio.h>
int main()
{
    char c;
    while (1)
    {
        printf("enter any cherecter : ");
        scanf(" %c", &c);    // notise space befoer %c
        if (c >= 'A' && c <= 'Z')
        {
            printf("it is a upper case = %d\n", c);
        }
        else if (c >= 'a' && c <= 'z')
        {
            printf("it is lower case = %d\n", c);
        }
        else
        {
            printf("not an alphabet = %d\n", c);
        }
    }
    return 0;
}
