//   12.Write a program to check given number in range of 100-200 or not.


#include<stdio.h>

int main(){
    int a;
    printf("enter a no. : ");
    scanf("%d",&a);
    if(a>100 && a<200){
        printf("in range");
    } 
    else{
        printf("not in range");
    }
    return 0;
}