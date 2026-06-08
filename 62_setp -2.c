// 16.Write a program to calculate the total salary based on the basic salary:
// If BS in between 4000-6000 --> ta 40% & hra is 20%
// If BS in between 6000-10000 --> ta 45% & hra is 20%
// If BS is greater than 10000 --> ta 55% & hra is 5000

#include <stdio.h>

int main()
{
    int bs;
    int ts;
    printf("enter basic salery : ");
    scanf("%d", &bs);
    if (bs >= 4000 && bs <= 6000)
    {
        ts = bs + (bs * 40 / 100) + (bs * 20 / 100);
        printf("total salery = %d", ts);
    }
    else if (bs > 6000 && bs <= 10000)
    {
        ts = bs + (bs * 45 / 100) + (bs * 20 / 100);
        printf("total salery = %d", ts);
    }
    else if (bs > 10000)
    {
        ts = bs + (bs * 55 / 100) + 5000;
        printf("total salery = %d", ts);
    }
    else
    {
        printf("amount is not valide");
    }
    return 0;
}