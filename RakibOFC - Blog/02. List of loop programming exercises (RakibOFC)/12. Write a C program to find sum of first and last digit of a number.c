#include<stdio.h>

int main()
{
    int i, number, firstDigit, lastDigit, sum;

    printf("Find sum of first and last digit of a number\n\nNumber: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while(number >= 10)
    {
        number = number / 10;
    }
    firstDigit = number;
    sum = firstDigit + lastDigit;

    printf("\nFirst Digit: %d, Last Digit: %d\nSum = %d\n\n", firstDigit, lastDigit, sum);

    return 0;
}
