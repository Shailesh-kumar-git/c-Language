#include <stdio.h>
int main()
{
    float m, cm;
    printf("enter value in cm = ");
    scanf("%f", &cm);
    m = cm / 100;
    printf("value in m = %.2f", m);

    return 0;
}