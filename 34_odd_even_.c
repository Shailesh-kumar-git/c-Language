//  5. Write a program to check given number is even or odd.

#include<stdio.h>
int main(){
    int a;
    printf("enter a num = ");
    scanf("%d",&a);
    if(a%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
    return 0;
}