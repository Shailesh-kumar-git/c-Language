//   13.Write a program to Check whether a person is a child, teenager,
//      adult, or senior based on age.

#include <stdio.h>

int main()
{
    int age;
    while (1)
    {
        printf("enter any age : ");
        scanf(" %d", &age);
        if (age <= 13 && age >= 0)
        {
            printf("CHILD");
        }
        else if (age > 13 && age <= 19)
        {
            printf("teenager");
        }
        else if (age >= 20 && age <= 50)
        {
            printf("adult");
        }
        else
        {
            printf("senior citision");
        }
        printf("\n");
    }
    return 0;
}