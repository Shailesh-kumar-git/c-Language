// 3. Write a program to print word according to number like 1 One 2 Two upto 10.

#include <stdio.h>

int main() {
    int a;
    printf("enter any no up to 10 : ");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("ONE");break;
        case 2: printf("TWO");break;
        case 3: printf("THREE");break;
        case 4: printf("FOURE");break;
        case 5: printf("FIVE");break;
        case 6: printf("SIX");break;
        case 7: printf("SEVEN");break;
        case 8: printf("EIGHT");break;
        case 9: printf("NINE");break;
        case 10: printf("TEN");break;
        default: printf("no. in not in range");
    }
    return 0;
}