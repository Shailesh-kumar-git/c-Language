// 28.Write a program to check given number is prime or not.
                                          //  -------

#include <stdio.h>

int main() {
    int i, n, c=0;
    printf("enterr any no. : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       if(n%i==0)
       {
          c++;
       }
    }
    if(c==2)
    {
        printf("it is a prine no.");
    }
    else{
        printf("not a prime no.");
    }
    return 0;
}