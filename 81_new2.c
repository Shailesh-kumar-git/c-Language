// 5. Wap to find smallest number among has given three 
// numbers without using (&&) logical and operator.

#include <stdio.h>

int main() {
    int a,s,d;
    printf("enter three number = ");
    scanf("%d %d %d",&a,&s,&d);
    if(a<s){
        if(a<d)
        {
            printf("smallest no. %d",a);
        }
        else{
            printf("smallest no. %d",d);
        }
    }
    else{     // s<a
        if(s<d){
            printf("smallest no. %d",s);
        }
        else{
        printf("smallest no. %d",d);
        }
    }
    return 0;
}