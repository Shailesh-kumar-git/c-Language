//   15.Write a program to check whether a character is an alphabet or not.


#include<stdio.h>

int main(){
    char c;
    printf("enter a cherecter : ");
    scanf("%c",&c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))        // yes we can uese it like this
    printf("it is a alphabet = %d",c);
    else
    printf("not an alphabet = %d",c);
    return 0;
}



/*
#include<stdio.h>

int main(){
    char c;
    printf("enter a cherecter : ");
    scanf("%c",&c);
    if((c>=65 && c<=90) || (c>=97 && c<=122)) {            
        printf("it is a alphabet");                            
    }
    else{
        printf("not an alphabe");
    }
    return 0;
}*/