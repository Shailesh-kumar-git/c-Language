//   17.Write a program to check whether a character is an digit or not.


#include <stdio.h>
    int main()
    {
        char c;
        printf("enter any digit : ");
        scanf("%c", &c);
        if (c >='0' && c <= '9')
        {
            printf("it is digit");
        }
        else
        {
            printf("not digit");
        }
        return 0;
    }
