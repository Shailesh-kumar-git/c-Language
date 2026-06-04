//  8. Write a program to accept two number from user and display greatest number.


#include<stdio.h>

int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    if(a>b){
        printf("greater no.= %d",a);
    }
    else{
        printf("greater no.= %d",b);
    }
    return 0;
}