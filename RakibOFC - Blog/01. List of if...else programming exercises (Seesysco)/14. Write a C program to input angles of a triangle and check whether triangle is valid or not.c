#include<stdio.h>
void main()
{
    int angle1, angle2, angle3;
    printf("Input angles of a triangle and check whether triangle is valid or not.\n\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3, printf("\nEnter three angles...\n"));
    if(angle1 + angle2 + angle3 == 180)
    {
        printf("Triangle is valid.\n");
    }
    else
    {
        printf("Triangle is not valid.\n");
    }
}
