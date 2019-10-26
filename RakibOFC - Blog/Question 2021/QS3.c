#include<stdio.h>

int main()
{
    int n, num1, num2, digit, num1Sum = 0, num2Sum = 0;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    int num1Clone = num1;
    int num2Clone = num2;

    while(num1 > 0)
    {
        digit = num1 % 10;
        num1Sum = num1Sum + digit;
        num1 = num1 / 10;
    }

    while(num2 > 0)
    {
        digit = num2 % 10;
        num2Sum = num2Sum + digit;
        num2 = num2 / 10;
    }

    if(num1Sum > num2Sum)
    {
        printf("%d Greater\n\n", num1Clone);
    }
    else if(num1Sum == num2Sum)
    {
        printf("%d Equal %d\n\n", num1Clone, num2Clone);
    }
    else
    {
        printf("%d Greater\n\n", num2Clone);
    }
    return 0;
}
