#include<stdio.h>
void main()
{
    int side1, side2, side3;

    printf("Check whether the triangle is equilateral, isosceles or scalene triangle.\n\n");

    scanf("%d %d %d", &side1, &side2, &side3, printf("\nEnter three sides...\n"));

    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        if(side1 == side2 && side2 == side3)
        {
            printf("\nThe triangle is equilateral.\n");
        }
        else if(side1 == side2 || side2 == side3 || side1 ==side3)
        {
            printf("\nThe triangle is isosceles.\n");
        }
        else
        {
            printf("\nThe triangle is scalene.\n");
        }
    }
    else
    {
        printf("\nThe triangle is not valid.\n");
    }
}
