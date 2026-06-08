//   5. Write a program to accept a number and check if it is less than 500 or
//      greater than 500 or equal to 500.
#include <stdio.h>

int main()
{
    int num;
    while (1)
    {
        printf("enter any number = ");
        scanf(" %d", &num);
        if (num > 500)
        {
            printf("num is greater than 500");
        }
        else if (num == 500)
        {
            printf("num is equal to 500");
        }
        else
        {
            printf("num is less than 500");
        }
        printf("\n");
    }
    return 0;
}