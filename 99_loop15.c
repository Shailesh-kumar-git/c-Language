// 13.Write a program to display even number series

#include <stdio.h>

int main()
{
    int i, n;
    printf("enter a number for range : ");
    scanf("%d",&n);
        for (i = 0; i <= n; i++)
        {
            if(i%2==0)
            {
            printf("%d\n",i);
            }
        }
    return 0;
}