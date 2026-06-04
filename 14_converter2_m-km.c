#include<stdio.h>

int main(){
    float km,m;
    printf("enter a value in m = ");
    scanf("%f",&m);
    km=m/1000;
    printf("%.3f",km);
    return 0;
}