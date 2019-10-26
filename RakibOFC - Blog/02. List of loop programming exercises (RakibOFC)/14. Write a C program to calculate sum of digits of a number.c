#include<stdio.h>

int main()
{
    int number, digit, sum = 0;

    printf("Calculate sum of digits of a number.\n\nNumber: ");
    scanf("%d", &number);

    while(number != 0)
    {
        digit = (number % 10);
        sum = sum + digit;
        number = (number / 10);
    }
    printf("\nSum: %d\n\n", sum);
}
