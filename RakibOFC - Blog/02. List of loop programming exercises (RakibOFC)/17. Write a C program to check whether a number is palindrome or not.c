#include<stdio.h>

int main()
{
    int digit, number, numberClone, revNumber = 0;

    printf("Check whether a number is palindrome or not.\n\nNumber: ");
    scanf("%d", &number);
    numberClone = number;

    /** Reverse Number */
    while(number != 0)
    {
        digit = (number % 10);
        number = (number / 10);
        revNumber = (10 * revNumber) + digit;
    }

    /** Reverse number end  */
    if(numberClone == revNumber)
    {
        printf("\n%d is palindrome!\n\n", numberClone);
    }
    else
    {
        printf("\n%d is not palindrome.\n\n", numberClone);
    }
    return 0;
}
