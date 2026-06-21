// 30.Write a program to find sum of all number between 1-25 and check sum is even or odd.

#include <stdio.h>

int main() {
    int s=0,i;
    for(i=1; i<=25; i++)
    {
        s=s+i;
    }
    printf("sum = %d\n",s);
    if(s%2==0)
    {
        printf("%d is even",s);
    }
    else
    {
        printf("odd");
    }
    return 0;
}