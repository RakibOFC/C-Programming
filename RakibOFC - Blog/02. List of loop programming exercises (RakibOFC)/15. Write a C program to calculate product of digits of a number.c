#include<stdio.h>

int main()
{
    int number, digit, product = 1;

    printf("Calculate product of digits of a number.\n\nNumber: ");
    scanf("%d", &number);

    while(number != 0)
    {
        digit = (number % 10);
        product = product * digit;
        number = (number / 10);
    }
    printf("\nProduct: %d\n\n", product);
    return 0;
}
