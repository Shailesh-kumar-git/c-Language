//  10. Write a program to check given char is vowel or consonant.


#include<stdio.h>

int main()
{
    
    char c;
    printf("enter a cherecter : ");
    scanf("%c",&c);
    if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u' )
    {
        printf("its a vowel\n");
    }
    else{
        printf("its a consonant\n");
    }
    return 0;
}