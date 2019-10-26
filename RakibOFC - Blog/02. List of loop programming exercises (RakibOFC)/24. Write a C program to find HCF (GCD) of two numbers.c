#include<stdio.h>

int main()
{
    int dividend, divisor, remainder = 1;

    printf("Find HCF (GCD) of two numbers.\n\nEnter first number: ");
    scanf("%d", &dividend);

    printf("Enter second number: ");
    scanf("%d", &divisor);

    while(remainder != 0)
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    printf("\nGCD: %d\n", dividend);

    return 0;
}
