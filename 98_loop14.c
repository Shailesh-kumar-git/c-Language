// 12.Write a program to display number between given range.

#include <stdio.h>

int main() {
    int i, n, m;
    printf("enter number for range from n to m : ");
    scanf("%d %d",&n ,&m);
    printf("prrint ramge\n\n");

    for(i=n; i<=m; i++)
    {
        printf("%d \n",i);
    }
    return 0;
}