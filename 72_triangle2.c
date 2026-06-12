// 22.Write a program to check whether the triangle is 
// valid or not if angles are given.

#include <stdio.h>

int main() {
    int a1,a2,a3;
    int t;
    printf("enter angels for triangle : ");
    scanf("%d %d %d",&a1, &a2, &a3);
    t=a1+a2+a3;
    if(t==180){
        printf("it is triangle");
    }
    else{
        printf("NOT a teiangle");
    }
    return 0;
}