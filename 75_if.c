// 24.Write a program to check wether the last digit of number (enter by user) is divisible by 3 or not.

#include <stdio.h>

int main() {
    int n,l;
    printf("enter no :");
    scanf("%d",&n);
    l=n%10;
    if(l%3==0){
        printf("it is devesible by 3");
    }
    else{
        printf("it is not devesible by 3");
    }
    return 0;
}