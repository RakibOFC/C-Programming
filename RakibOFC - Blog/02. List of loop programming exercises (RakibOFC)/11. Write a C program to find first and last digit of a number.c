#include<stdio.h>

int main()
{
    int n, num, firstDigit, lastDigit;

    printf("Find first and last digit of a number.\n");
    printf("\nEnter number: ");
    scanf("%d", &num);

    firstDigit = num;
    lastDigit = num % 10;

    for(n = 1; firstDigit  >= 10; n++)
    {
        firstDigit = firstDigit / 10;
    }
    printf("\nFirst Digit: %d, Last Digit: %d\n", firstDigit, lastDigit);

    return 0;
}
