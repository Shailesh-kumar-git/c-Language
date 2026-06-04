//  3. Write a program to check given number is positive or negative.

#include<stdio.h>
int main(){
    int a;
    printf("enter any no = ");
    scanf("%d",&a);
    if(a>0){
        printf("no. is positive\n");
    }
    else{
        printf("no. is negative\n");
    }
    return 0;
}