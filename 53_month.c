// 2. Write a program to print name of month according to number.

#include<stdio.h>

int main(){
    int m;
    printf("enter month num = ");
    scanf("%d", &m);

    if(m==1){
        printf("janwery");
    }
    else if(m==2){
        printf("ferwary");
    }
    else if(m==3){
        printf("march");
    }
    else if(m==4){
        printf("april");
    }
    else if(m==5){
        printf("may");
    }
    else if(m==6){
        printf("june");
    }
    else if(m==7){
        printf("july");
    }
    else if(m==8){
        printf("augest");
    }
    else if(m==9){
        printf("september");
    }
    else if(m==10){
        printf("octuber");
    }
    else if(m==11){
        printf("november");
    }
    else if(m==12){
        printf("december");
    }
    else{
        printf("ERROR");
    }
    return 0;
}