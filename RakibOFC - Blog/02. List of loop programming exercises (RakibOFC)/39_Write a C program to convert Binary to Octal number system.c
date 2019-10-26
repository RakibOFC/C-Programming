// Convert Binary to Octal number system

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i, bin_length, dec_length, remainder[100];
    int power, decimal_number = 0, octal_number, temp;
    char binary_number[100];

    printf("Enter binary number: ");
    scanf("%s", binary_number);

    // Length of binary_number string
    for(i = 0; binary_number[i] != '\0'; i++);
    bin_length = i;

    /*
    Decimal to Binary
    Example:
    Binary number = 1001

    2^3     2^2     2^1     2^0
    1       0       0       0
    8           +           1

    Decimal number = 9

    */

    for(i = 0, power = (bin_length - 1); i < bin_length; i++, power--)
    {
        if(binary_number[i] == '1')
        {
            decimal_number += pow(2, power);
        }
    }

    i = 0;
    while(decimal_number != 0)
    {
        remainder[i] = (decimal_number % 8);
        decimal_number /= 8;

        i++;
    }
    dec_length = i;

    for(i = (dec_length - 1); i >= 0; i--)
    {
        octal_number +=  (remainder[i] * pow(10, i));
    }

    printf("\nOctacl Number: %d\n\n", octal_number);

    return 0;
}
