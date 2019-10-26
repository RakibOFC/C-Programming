#include<stdio.h>

int main()
{
    int digit, number, revNumber = 0;

    printf("Enter a number and print its reverse.\n\nNumber: ");
    scanf("%d", &number);

    /** Reverse Number */
    while(number != 0)
    {
        digit = (number % 10);
        number = (number / 10);
        revNumber = (10 * revNumber) + digit;
    }
    /** Reverse number end  */
    printf("\nReverse Number: %d\n\n", revNumber);
    return 0;
}
