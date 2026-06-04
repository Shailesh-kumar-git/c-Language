#include<stdio.h>

int main(){
    float r,d,y;
    printf("enter rupee = ");
    scanf("%f",&r);
    d=r/95;
    y=r/0.6;
    printf("doller = %.2f $\n",d);
    printf("yen = %.2f Y",y);

    return 0;
}