// 21.Write a program to check given year is leap year or not.

#include <stdio.h>

int main() {
    int year;           
    printf("enter year = ");
    scanf("%d",&year);
//     If the year is divisible by 4, it is usually a leap year.
//     But if it is divisible by 100, it is not a leap year.
//     However, if it is divisible by 400, it is a leap year.
    if((year%4==0 && year%100!=0)||year%400==0){
        printf("it is a leep year");
    }
    else {
        printf("it is not leep year");
    }
    return 0;
}
