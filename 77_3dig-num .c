// WAP to accept three digit number and there digits sum.

#include <stdio.h>

int main()
{
    int n, a, s, d;
    int sum;
    printf("enter any three digit number : ");
    scanf("%d", &n);
    a = n % 10;
    s = (n%100)/10;
    d = n / 100;

    sum = a + s + d;
    printf("SUM = %d", sum);
    return 0;
}