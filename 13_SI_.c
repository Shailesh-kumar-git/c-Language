#include<stdio.h>

int main(){
    float p,t,r,si;
    printf("enter principle = ");
    scanf("%f",&p);
    printf("enter time = ");
    scanf("%f",&t);
    printf("enter rate = ");
    scanf("%f",&r);
    si=(p*r*t)/100;
    printf("simple intrest = %.2f",si);

    return 0;
}