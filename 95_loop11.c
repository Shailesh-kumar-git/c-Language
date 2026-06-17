// 9. Write a program to display number square 1 to n (given number).

#include <stdio.h>
#include <math.h>
int main() {                                       // pow() returns a double, not an int.                                                  
                                                  // %f is used to print double values
    int n,i;
    printf("enter any number = ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}