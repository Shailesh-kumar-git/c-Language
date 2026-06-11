// 7. Write a program using switch-case to print your friend's 
// name based on the first letter of their name.

#include <stdio.h>
int main() {
    char c;
    printf("enter firat letter of your frends name : ");
    scanf("%c",&c);
    
    if(c>='A' && c<='Z')
    {
        c=c+32;
    }
    switch(c){
        case 's': printf("siddhant"); break;
        case 'a': printf("anshu"); break;
        case 'm': printf("mom"); break;
        case 'u': printf("umang"); break;
        default:printf("error");

    }
    return 0;
}