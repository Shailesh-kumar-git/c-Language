// 19.Write a program to display sum 1 to n ( given number) only odd numbers sum.

#include <stdio.h>

int main() {
    int n, sum=0;
    printf("enter a no. = ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("sum = %d",sum);
    

    return 0;
}