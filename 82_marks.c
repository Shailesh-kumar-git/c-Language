// 8. Write a program to accept roll no and marks of 5 subjects of a student,
// if individuals subject have above 40 marks so print student qualify exam otherwise print
//  student fail in exam and if student qualify exam so Calculate percentage got in exam by student.

// a. If per greater than or equal to 75 --> A grade
// b. If per between 60-75 --> B grade
// c. If per between 50-60 --> C grade
// d. If per between 40-50 --> D grade

#include <stdio.h>

int main()
{
    int roll;
    float p;
    int s1, s2, s3, s4, s5;
    char c;
    printf("enter student roll_no. = ");
    scanf("%d", &roll);
    printf("enter_marks of 5 subject :-\n");
    printf("1. maths = ");
    scanf("%d", &s1);
    printf("2. chemestry = ");
    scanf("%d", &s2);
    printf("3. physics = ");
    scanf("%d", &s3);
    printf("4. biology = ");
    scanf("%d", &s4);
    printf("5. computer = ");
    scanf("%d", &s5);
    if (s1 <= 100 && s2 <= 100 && s3 <= 100 && s4 <= 100 && s5 <= 100)
    {
        if (s1 > 40 && s2 > 40 && s3 > 40 && s4 > 40 && s5 > 40)
        {
            printf("student qualify exam\n");
            p = (s1 + s2 + s3 + s4 + s5) / 5.0;
            if (p >= 75)
            {
                c = 'A';
                printf("percentage = %.2f\n", p);
                printf("grade : %c", c);
            }
            else if (p >= 60 && p < 75)
            {
                c = 'B';
                printf("percentage = %.2f\n", p);
                printf("grade : %c", c);
            }
            else if (p >= 50 && p < 60)
            {
                c = 'C';
                printf("percentage = %.2f\n", p);
                printf("grade : %c", c);
            }
            else if (p >= 40 && p < 50)
            {
                c = 'D';
                printf("percentage = %.2f\n", p);
                printf("grade : %c", c);
            }
        }
        else
        {
            printf("student fail in exam \n");
        }
    }
    else
    {
        printf("invalide marks!!!");
    }

    return 0;
}