//  2. Write a program to accept two integers and check whether they are equal or not.


#include<stdio.h>
int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    if(a==b){
        printf("true");
    }
    else{
        printf("no");
    }

    return 0;
}