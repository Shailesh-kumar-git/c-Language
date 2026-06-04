//  6. Write a program to accept a number from user and print if it is divisible by 5 .

#include<stdio.h>

int main(){
    int a;
    printf("enter a num = ");
    scanf("%d",&a);
    if(a%5==0){
        printf("yes, devesible by 5\n");
        printf("num = %d",a/5);
    }
    else{
        printf("ERROR");
    }
    return 0;
}