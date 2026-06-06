//  14.Write a program to accept two numbers and check
//      if the first is a multiple of the second.

#include<stdio.h>

int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    if(b==0){
        printf("ERROR");
    }
    else if(a%b==0){
        printf("YES multiple");
    }
    else{
        printf("NO multiple");
    }
    return 0;
}