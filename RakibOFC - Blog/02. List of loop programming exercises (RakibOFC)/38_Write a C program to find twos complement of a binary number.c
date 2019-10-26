// Find two's complement of a binary number

#include<stdio.h>
#include<string.h>

int main()
{
    int i, bin_length;
    char carry = '1', binary_number[100], ones_comp[100], twos_comp[100];
input:
    printf("Enter binary number: ");
    scanf("%s", binary_number);

    // Length of binary_number string
    for(i = 0; binary_number[i] != '\0'; i++);
    bin_length = i;

    for(i = 0; i < bin_length; i++)
    {
        if(binary_number[i] == '0')
        {
            ones_comp[i] = '1';
        }
        else if(binary_number[i] == '1')
        {
            ones_comp[i] = '0';
        }
        else
        {
            printf("Unexpected character! Please enter a valid input...\n\n");
            goto input;
        }
    }
    ones_comp[i] = '\0'; // End of string

    for(i = (bin_length - 1); i >= 0; i--)
    {
        if(ones_comp[i] == '1' && carry == '1')
        {
            twos_comp[i] = '0';
        }
        else if(ones_comp[i] == '0' && carry == '1')
        {
            twos_comp[i] = '1';
            carry = '0';
        }
        else if(carry == '0')
        {
            twos_comp[i] = ones_comp[i];
        }
    }

    printf("\nOne's Complement: %s\nTwo's Complement: %s\n\n", ones_comp, twos_comp);

    return 0;
}
