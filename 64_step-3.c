// 18.Write a program to input electricity unit and calculate total electricity bill 
// according to the given bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill


#include<stdio.h>

int main(){
    int unit;
    float r;
    printf("enter electricity unit :- ");
    scanf("%d",&unit);

    if(unit <= 50){
        r = unit * 0.50;
    } else if(unit <= 150){
        r = 50 * 0.50 + (unit - 50) * 0.75;
    } else if(unit <= 250){
        r = 50 * 0.50 + 100 * 0.75 + (unit - 150) * 1.20;
    } else {
        r = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unit - 250) * 1.50;
    }

    r = r * 1.20; /* add 20% surcharge */
    printf("total amount for given unit = %.2f\n", r);
    return 0;
}