// Find one's complement of a binary number

#include<stdio.h>
#include<string.h>

int main()
{
    int i, bin_length;
    char binary_number[100], ones_comp[100];
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
    ones_comp[i] = '\0'; // End of string by creating a NULL value.

    printf("\nBinary Number: %s\nOne's Complement: %s\n\n", binary_number, ones_comp);

    return 0;
}
