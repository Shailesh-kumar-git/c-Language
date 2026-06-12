#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("triangle check from side\n\n");
    printf("enter sides : ");
    scanf("%d %d %d",&side1, &side2, &side3);
    if(side1+side2>side3 && side2+side3>side1 &&side1+side3>side2)
    {
        printf("it is a triangle");
    }
    else
    {
        printf("it is a not triangle");
    }
    return 0;
}