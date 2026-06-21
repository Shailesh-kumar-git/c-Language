// 20.Write a program to display sum 1 to n ( given number) only multiple of 5 numbers sum.

#include <stdio.h>

int main() {
    int n,s=0;
    printf("enter a no.= ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if(i%5==0)
        {
            s=s+i;
        }
    }
    printf("sum = %d",s);
    return 0;
}