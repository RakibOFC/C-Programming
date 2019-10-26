#include<stdio.h>
void main()
{
    int side1, side2, side3;

    printf("Input all sides of a triangle and check whether triangle is valid or not\n\n");

    scanf("%d %d %d", &side1, &side2, &side3, printf("\nEnter three sides...\n"));

    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("Triangle is valid.\n");
    }
    else
    {
        printf("Triangle is not valid.\n");
    }
}
