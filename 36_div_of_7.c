//   7. Write a program to accept a number from user and print if it is multiple of 7 .


#include<stdio.h>

int main(){
    int a;
    printf("enter a num = ");
    scanf("%d",&a);
    if(a%7==0){
        printf("yes, devesible by 7\n");
        printf("num = %d",a/7);
    }
    else{
        printf("ERROR");
    }
    return 0;
}