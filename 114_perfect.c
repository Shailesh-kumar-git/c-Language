// 29.Write a program to check given number is perfact or not.

#include <stdio.h>

int main() {
    int i,n,s=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
           s=s+i;
        }
    }
    if(s==n*2)
    {
        printf("%d is a perfect no.",n);
    }
    else{
        printf("it is not a perfect no.");
    }
    return 0;
}