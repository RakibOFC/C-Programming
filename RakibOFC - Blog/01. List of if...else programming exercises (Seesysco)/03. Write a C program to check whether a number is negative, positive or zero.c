#include<stdio.h>
void main()
{
    int num1;
    printf("Check whether a number is negative, positive or zero.\n");
    scanf("%d", &num1, printf("\nEnter a number: "));
    if(num1 > 0)
    {
        printf("\n%d is positive number.\n", num1);
    }
    else if(num1 < 0)
    {
        printf("\n%d is negative number.\n", num1);
    }
    else if(num1 == 0)
    {
        printf("\nZero Detected!\n");
    }
    else
    {
        printf("Invalid Input!");
    }
}

