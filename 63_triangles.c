// 17.Check whether the triangle is equilateral, scalene, or isosceles.

#include <stdio.h>
#include <math.h>
int main()
{
    int side1, side2, side3;
    float a, h;
    int p;
    while (1)
    {
        printf("enter sides of triangle :- \n");
        printf("enter side 1 : ");
        scanf(" %d", &side1);
        printf("enter side 2 : ");
        scanf(" %d", &side2);
        printf("enter side 3 : ");
        scanf(" %d", &side3);
        if (side1 == side2 && side2 == side3 && side1 == side3)
        {
            printf("this is a equatral triangle\n");
            int side = side1;
            a = pow(3, 0.5) / 4 * pow(side, 2);
            h = pow(3, 0.5) / 2 * side;
            p = 3 * side;
            printf("area = %.2f\n", a);
            printf("hight = %.2f\n", h);
            printf("parimeter = %d\n", p);
        }
        else if (side1 != side2 && side2 != side3 && side1 != side3)
        {
            printf("this is scalen triangle\n");
            p = side1 + side2 + side3;
            float s = p / 2.0;
            a = pow(s * (s - side1) * (s - side2) * (s - side3), 0.5);
            h = (2 * a) / side2;
            printf("area = %.2f\n", a);
            printf("hight = %.2f\n", h);
            printf("parimeter = %d\n", p);
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("this is isoceles triangle\n");
            int s;
            if (side1 == side2) // side1 = side2 = a  ; side3 = b
            {
                s = side1;
                h = pow(s * s - pow(side3 / 2.0, 2), 0.5);
                a = 0.5 * side3 * h;
                p = (2 * s) + side3;
                printf("area = %.2f\n", a);
                printf("hight = %.2f\n", h);
                printf("perimeter = %d\n", p);
            }
            else if (side2 == side3) // side2 = side3 = a  ; side1 = b
            {
                s = side2;
                h = pow(s * s - pow(side1 / 2.0, 2), 0.5);
                a = 0.5 * side1 * h;
                p = (2 * s) + side1;
                printf("area = %.2f\n", a);
                printf("hight = %.2f\n", h);
                printf("perimeter = %d\n", p);
            }
            else
            { //(side1==side3)       //side1 = side3 = a  ; side2 = b
                s = side3;
                h = pow(s * s - pow(side2 / 2.0, 2), 0.5);
                a = 0.5 * side2 * h;
                p = (2 * s) + side2;
                printf("area = %.2f\n", a);
                printf("hight = %.2f\n", h);
                printf("perimeter = %d\n", p);
            }
        }
        else
        {
            printf("ERROR");
        }
    }
    return 0;
}
