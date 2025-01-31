#include <stdio.h>

int main()
{
    int side1, side2, side3;

    printf("enter the value of first side:\n");
    scanf("%d", &side1);
    printf("enter the value of second side:\n");
    scanf("%d", &side2);
    printf("enter the value of third side:\n");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {
        printf("the triangle is valid\n");

    if (side1 == side2 && side2 == side3)
    {
        printf("the triangle is an equilateral triangle\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("the triangle is isosceles triangle\n");
    }
    else
    {
        printf("the triangle is an scalene triangle\n");
    }

    if (side1 * side1 == side2 * side2 + side3 * side3 || side2 * side2 == side1 * side1 + side3 * side3 || side3 * side3 == side1 * side1 + side2 * side2)
    {
        printf("the triangle is an rat\n");
    }
    else
    {
        printf("it is not a rat\n");
    }

    }else
    {
        printf("the triangle is not valid\n");
    }

    return 0;
}