// 3. Check if a number is even-positive, even-nagative ,odd-positive ,odd-nagative or zero.

#include <stdio.h>

int main()
{
    int num;
    printf("enter any number = ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("EVEN NUMDER\n");
        if (num > 0)
        {
            printf("positive even number");
        }
        else
        {
            printf("negitive even number");
        }
    }
    else if (num == 0)
    {
        printf("ZERO");
    }
    else
    {
        printf("ODD NUMBER\n");
        if (num > 0)
        {
            printf("positive odd number");
        }
        else
        {
            printf("negitive odd number");
        }
    }
    return 0;
}