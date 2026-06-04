//  3. Write a program to check given number is positive or negative.

#include<stdio.h>
int main(){
    int a;
    printf("enter any no = ");
    scanf("%d",&a);
    a>0 ? printf("num is +ve") : printf("num is -ve");
    return 0;
}