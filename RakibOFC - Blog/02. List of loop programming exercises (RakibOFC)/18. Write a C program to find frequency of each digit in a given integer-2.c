#include<stdio.h>

int main()
{
    int i, digit, freqCount[10] = {0};
    long long number, numberClone;

    printf("Find frequency of each digit in a given integer.\n\nNumber: ");
    scanf("%d", &number);

    numberClone = number;

    while(number != 0)
    {
        digit = (number % 10);
        number = (number / 10);
        freqCount[digit]++;
    }
    for(i = 0; i <= 9; i++)
    {
        /// if(freqCount[i] > 0) /** This line will be print, if frequency is greater than 0.*/
        {
            printf("Frequency of %d = %d\n", i, freqCount[i]);
        }
    }
    return 0;
}
