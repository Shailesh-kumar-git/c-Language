// 31.Write a program to check how many numbers is even & odd between 77-165.


#include <stdio.h>

int main() {
    int i;
    for(i=77; i<=165; i++)
    {
        if(i%2==0)
        {
           printf("even %d ",i);
        }
        else
        {
            printf("odd %d ",i);
        }
    }
    return 0;
}