// 8. Write a program using switch-case that takes the first 
// letter of a country name as input and prints a full
// country name starting with that letter.

#include <stdio.h>

int main() {
    char c;
    printf("enter first letter of contery : ");
    scanf("%c",&c);
    if(c>='A'&& c<='Z')
    {
        c=c+32;
    }
    switch(c){
        case 'i': printf("INDIA");break;
        case 'e':printf("ENGLAND");
        case 'c':printf("CHINA");
        case 'j':printf("JAPAN");
    }
    return 0;
}