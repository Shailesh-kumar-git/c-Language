// 14.Write a program to display odd number series.
#include <stdio.h>
int main()
{
    int i, n;
    printf("enter a number for range : ");
    scanf("%d",&n);
        for (i = 0; i <= n; i++)
        {
            if(i%2!=0)     // if (i%2==1)
            {
            printf("%d ",i);
            }
        }
    return 0;
}