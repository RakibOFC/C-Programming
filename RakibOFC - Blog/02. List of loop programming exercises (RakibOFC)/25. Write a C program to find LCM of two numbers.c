#include<stdio.h>

int main()
{
    int dividend, divisor, remainder = 1, lcm, dividendClone, divisorClone;

    printf("Find LCM of two numbers.\n\nEnter first number: ");
    scanf("%d", &dividend);

    printf("Enter second number: ");
    scanf("%d", &divisor);

    dividendClone = dividend;
    divisorClone = divisor;

    while(remainder != 0)
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    printf("\nGCD: %d\n", dividend);
    lcm = (dividendClone * divisorClone) / dividend;

    printf("\nLCM: %d\n", lcm);

    return 0;
}
