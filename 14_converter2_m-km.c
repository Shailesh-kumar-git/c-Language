#include<stdio.h>

int main(){
    float km,m;
    printf("enter a value in meter = ");
    scanf("%f",&m);
    km=m/1000;
    printf("in km = %.3f",km);
    return 0;
}