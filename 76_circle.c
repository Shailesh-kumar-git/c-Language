// 25.Write a program to print difference between area of circle's
// but ensure that result must be positive.

#include <stdio.h>

int main() {
    int r1,r2;
    float a1,a2,d;
    printf("enter radius for first circle");
    scanf("%d",&r1);
    printf("enter radius for second circle");
    scanf("%d",&r2);
    a1=3.14*r1*r1;
    a2=3.14*r2*r2;
    d=a2-a1;
    if (d>0){
        printf("positive",d);
    }
    else{
        printf("negitive");
    }
    return 0;
}