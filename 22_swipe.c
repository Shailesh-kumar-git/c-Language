// 24.Write a program to swap any two numbers using third variable.

#include<stdio.h>

int main(){
    int a,b,swipe;
    a=12;
    b=45;
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    printf("\n");
    swipe=a;
    a=b;
    b=swipe;
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}