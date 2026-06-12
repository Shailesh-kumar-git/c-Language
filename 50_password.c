//   20.Write a program to accept username and 
//   password and verify login (hardcoded values).

#include<stdio.h>

int main(){
    char a;
    int p;

    printf("enter user name : ");
    scanf("%c",&a);
    printf("enter password : ");
    scanf("%d",&p);
    if ((a>=65 && a<=90) || (a>=97 && a<=122)  )
    {
        printf("user name varified");
    }
     if(p>=0 && p<=9) 
    {
        printf("password varified");
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}       