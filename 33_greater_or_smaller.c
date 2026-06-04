//  4. Write a program to accept a number and check it is less then 500 or greater then 500.

#include<stdio.h>
int main(){
    int a;
    printf("enter a num = ");
    scanf("%d",&a);
    a>500 ? printf("greater then 500") : printf("less then 500");
    return 0;
}