// 11.Write a program to display table of given number.

#include <stdio.h>
#include <math.h>
int main() {                                     
    int n,i;
    printf("enter any number = ");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}