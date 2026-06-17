// 9. Write a Program to accept user’s marital status, gender and
// age to check if he/she is eligible for marriage or not.

#include <stdio.h>

int main()
{
    int age;                                             
    char gender, status;                                                 
    printf("enter persion's age =");
    scanf(" %d", &age);
    printf("enter persion gender =");
    scanf(" %c",&gender);
    printf("enter persion's status =");
    scanf(" %c",&status);

    if(gender=='m')
    {
        printf("MALE\n");
        if(age>=20 && age<=35)
        {
            printf("elegable for marrage but\n");
            if(status=='d'||status=='s')
            {
                printf(" can get marrde\n");
            }
            else if(status=='l'){
                printf(" can't get marride \n");
            }
        }
        else
        {
            printf("not elegable for marrage\n");
        }
    }
    else if(gender=='f')
    {
        printf("female\n");
        if(age>=18 && age<=30)
        {
            printf("elegable for marrage\n");
            if(status=='d'||status=='s'||status=='v')
            {
                printf("yes you can get marrde\n");
            }
            else if(status=='l'){
                printf("you can't get marride\n");
            }
        }
        else
        {
            printf("not elegable for marrage\n");
        }
    }
    else{
        printf("invelide");
    }


    return 0;
}