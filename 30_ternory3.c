// wright a prg to check voter is elegebal to give vote or not

/* #include<stdio.h>

int main(){
    int age;
    printf("enter your age = ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("persion can give vote");
    }
    else{
        printf("persion can't give vote");
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    int age;
    printf("enter your age = ");
    scanf("%d",&age);
    age>=20 ? printf("you can give vote") : printf("you can't give vote");
    printf("u are done");
    return 0;
}