//  4. Write a program to accept a number and check
//   if it is positive , nagative or zero.

#include <stdio.h>

int main()
{
    int num;
    while (1)
    {
        printf("enter any number = ");
        scanf(" %d", &num);
        if (num > 0)
        {
            printf("num is positive");
        }
        else if (num == 0)
        {
            printf("num is zero");
        }
        else
        {
            printf("num is negative");
        }
        printf("\n");
    }
    return 0;
}