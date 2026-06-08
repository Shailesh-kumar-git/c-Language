// 14.Given a month number, print the number of days (with Feb as 28 days).

#include <stdio.h>

int main()
{
    int n;
    printf("enter month number : ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("January : 31 days");
    }
    else if (n == 2)
    {
        printf("February : 28 days");
    }
    else if (n == 3)
    {
        printf("March : 31 days");
    }
    else if (n == 4)
    {
        printf("April : 30 days");
    }
    else if (n == 5){
        printf("May : 31 days");
    }
    else if (n == 6)
    {
        printf("June : 30 days");
    }
    else if (n == 7)
    {
        printf("July : 31 days");
    }
    else if (n == 8)
    {
        printf("August : 31 days");
    }
    else if (n == 9)
    {
        printf("September : 30 days");
    }
    else if (n == 10)
    {
        printf("October : 31 days");
    }
    else if (n == 11)
    {
        printf("November : 30 days");
    }
    else if (n == 12)
    {
        printf("December : 31 days");
    }
    else
    {
        printf("ERROR");
    }

    return 0;
}