#include<stdio.h>

int main()
{
    int number, digit, revNumber = 0, lastZero = 0;

    /**
     * Variable declaration
     * -----------------------
     * 'number' is input number.
     * 'digit' is every single digit. i.e number = 123, digit = 1, 2 and 3.
     * 'revNumber' is numbers reverse form.
     * 'lastZero' means if the numbers last digit is 0 (ZERO).
    */

    printf("Enter a number and print it in words.\n\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 10 == 0)
    {
        lastZero = 1;
    }
    while (number >= 10)
    {
        digit = number % 10;
        revNumber = (revNumber * 10) + digit;
        number = (number / 10);
    }
    revNumber = (revNumber * 10) + number;
    number = revNumber;

    printf("Words: ");
    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        switch (digit)
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;
        }
    }
    if(lastZero == 1)
    {
        printf("Zero");
    }
    printf("\n\n");

    return 0;
}
