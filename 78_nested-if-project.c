// ex of nested

#include <stdio.h>

int main() {
    int age;
    printf("enter your age = ");
    scanf("%d",&age);
    if(age>18){
        printf("welcome to my club\n\n");
        printf("clube munue:-\n");
        printf("1.pasta : 150rs\n");
        printf("2.chicken : 230rs\n");
        printf("3.cocacola : 70rs\n");
        int order;
        printf("place youre order :");
        scanf("%d",&order);
        switch(order){
            case 1: printf("pasta ordered pay 150rs\n");break;
            case 2: printf("chicken ordered pay 230rs\n");break;
            case 3: printf("cocacola ordered pay 70rs\n");break;
            default:printf("!!!");
        }
    }
    else{
        printf("you are under age\n");
        int a=19-age;
        printf("you can try after %d years",a);
    }
    return 0;
}