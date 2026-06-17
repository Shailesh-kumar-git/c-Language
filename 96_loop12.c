// 10.Write a program to display number cube 1 to n (given number).

#include <stdio.h>
#include <math.h>
int main() {                                     
    int n,i;
    printf("enter any number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}