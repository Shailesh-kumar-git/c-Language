#include <stdio.h>

int main() {
    int a;
    printf("enter any number : ");
    scanf("%d",&a);                                // false = 0
    
    switch(a%2==0){                                // true = 1
        case 0 : printf("odd");break;   
        case 1 : printf("even");break;


    }   
    return 0;
}