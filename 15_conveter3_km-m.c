#include<stdio.h>

int main(){
    float km,m;
    printf("enter a value in km = ");
    scanf("%f",&km);
    m=1000*km;
    printf("%.2f",m);
    return 0;
}