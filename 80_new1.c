// 4. Wap to find greatest number among has given three numbers 
// without using (&&) logical and operator.

#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter three number =\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("greatest no. = %d",a);
        }
        else{
            printf("greatest no. = %d",c);
        }
    }
    else{  // (b>a)
        if(b>c){
            printf("greatest no. = %d",b);
        }
        else{
            printf("greatest no. = %d",c);
        }
    }
    return 0;
}