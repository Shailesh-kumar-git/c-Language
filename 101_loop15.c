// 15.Write a program to display multiple of 7 between given range.

#include <stdio.h>

int main() {
    int n;
    printf("enter no. for range =   ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d \n",7*i);
    }
    
    return 0;
}