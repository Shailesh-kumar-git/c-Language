//  16.Write a program to check whether a character is an uppercase
//     so convert in lower case or lowercase soconvert in uppercase char .

#include <stdio.h>

int main()
{
    char ch;


        printf("enter any cherecter : ");
        scanf("%c", &ch);
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
            printf("conversion = %c", ch);
        }
        else
        {
            ch = ch + 32;
            printf("conversion = %c", ch);
        }
    return 0;
}