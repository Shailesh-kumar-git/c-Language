//  9. Write a program to accept two number from user and display smallest number.


#include<stdio.h>

int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    if(a<b){
        printf("smallest no.= %d",a);
    }
    else{
        printf("smallest no.= %d",b);
    }
    return 0;
}