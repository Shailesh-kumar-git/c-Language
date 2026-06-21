// 27.Write a program to display factorial of given number.


#include <stdio.h>

int main() {
    int i,n,p=1;
    printf("enter any no. : ");
    scanf("%d",&n);
    for(i=1; i<=n ;i++)
    {
        p=p*i;
    }
    printf("factorial of %d = %d",n,p);
    return 0;
}