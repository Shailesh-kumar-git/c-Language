//  25.Write a program to swap any two numbers without using third variable.

#include<stdio.h>
int main()
{
    int a,b;
    printf("enter no. a = ");
    scanf("%d",&a);
    printf("enter no. b = ");
    scanf("%d",&b);

    printf("before swiping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("\n");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swiping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}