// 9. Write a Program to accept user’s marital status, gender and
// age to check if he/she is eligible for marriage or not.

#include <stdio.h>

int main() {
    int status, gender, age;
    printf("\n");
    printf("---> MARREGE form <---\n");
    printf("Press the butten as per your choise\n\n");
    printf("_status_check_\n");
    printf("---------------\n");
    printf("1. unmarrede\n");
    printf("2. marride\n");
    printf("status = ");
    scanf(" %d",&status);
    if(status==1)
    {
        printf("you are single  [-UNMARIDE-] \n");
        printf("\n");
        printf("_gender_check_\n");
        printf("---------------\n");
        printf("1. MALE\n");
        printf("2. FEMALE\n\n");
        printf("gender = ");
        scanf(" %d",&gender);
        if(gender==1)
        {
            printf("MALE\n");
            printf("enter your age : ");
            scanf(" %d",&age);
            if(age>=20 && age<=30)
            {
                printf("YES, you can get marride");
            }
            else
            {
                printf("you can't  get marride");
            }
        }
        else
        {
            printf("FEMALE\n");
            printf("enter your age : ");
            scanf(" %d",&age);
            if(age>=18 && age<=25)
            {
                printf("you can get marride");
            }
            else
            {
                printf("you can't  get marride");
            }
        }
    }
    else if(status==2)
    {
        printf("you are all_rady marride\n");
    }
    else
    {
        printf("invalide_!!");
    }

    return 0;
}
