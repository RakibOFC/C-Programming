#include<stdio.h>
void main()
{
    int year;
    printf("Check whether a year is leap year or not.\n");
    scanf("%d", &year, printf("\nEnter a year: "));
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("\n%d is leap year.\n", year);
    }
    else
    {
        printf("\n%d is not leap year.\n", year);
    }
}
