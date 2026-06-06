//   13.Write a program to check given number is divisible by 3, 4 and 8 or not.


#include<stdio.h>

int main(){
    int a;
    printf("enter a no. :");
    scanf("%d",&a);
    if(a%3==0 && a%4==0 && a%8==0){
      printf("DEVISIBLE");  
    }
    else
    {
      printf("ERROR");
    }
    
    return 0;
}