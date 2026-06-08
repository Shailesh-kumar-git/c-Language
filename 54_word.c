//  3. Write a program to print word according
//     to number like 1---> One 2---> Two upto 10.

#include <stdio.h>

int main()
{
    int num;
    while (1)
    {
        printf("enter number for words = ");
        scanf(" %d", &num);
        if (num == 1)
        {
            printf("ONE");
        }
        else if (num == 2)
        {
            printf("TWO");
        }
        else if (num == 3)
        {
            printf("THREE");
        }
        else if (num == 4)
        {
            printf("FOUR");
        }
        else if (num == 5)
        {
            printf("FIVE");
        }
        else if (num == 6)
        {
            printf("SIX");
        }
        else if (num == 7)
        {
            printf("SEVEN");
        }
        else if (num == 8)
        {
            printf("EIGHT");
        }
        else if (num == 9)
        {
            printf("NINE");
        }
        else if (num == 10)
        {
            printf("TEN");
        }
        else
        {
            printf("error");
        }
        printf("\n");
    }
    return 0;
}