// 22.Write a program to check whether the triangle is
// valid or not if angles are given.

#include <stdio.h>

int main()
{
    int a1, a2, a3;
    int t;
    printf("check from angles \n\n");
    printf("enter angels for triangle : ");
    scanf("%d %d %d", &a1, &a2, &a3);
    t = a1 + a2 + a3;
    if (a1 > 0 && a2 > 0 && a3 > 0)
    {
        if (t == 180)
        {
            printf("it is triangle");
        }
        else
        {
            printf("NOT a teiangle");
        }
    }
    else
    {
        printf("angle given do not make triangle");
    }
    return 0;
}