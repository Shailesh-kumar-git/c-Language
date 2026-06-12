// 23.Write a program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    int cp,sp;
    int p,l;
    printf("enter cost price : ");
    scanf("%d",&cp);
    printf("enter selling price : ");
    scanf("%d",&sp);
    p=sp-cp;
    l=cp-sp;
    if(p>0){            //  selling price >> cost price
        printf("PROFIT: %d", p);
    }
    else if(l>0){
        printf("LOSS: %d", l);
    }
    else{
        printf("NO PROFIT NO LOSS\n");
    }
    return 0;
}