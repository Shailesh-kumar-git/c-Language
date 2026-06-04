#include<stdio.h>

int main(){
    float kg,g;
    printf("enter a value in kg = ");
    scanf("%f",&kg);
    g=1000*kg;
    printf("%.2f",g);
    return 0;
}