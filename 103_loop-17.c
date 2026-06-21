// 17.Write a program to display average 1 to n ( given number).

#include <stdio.h>

int main() {
    int n,s=0,a;
    printf("enter a number = ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        s=s+i;
        a=s/n;
    }
    printf("sum = %d\n",s);
    printf("avrage = %d",a);
    
    return 0;
}