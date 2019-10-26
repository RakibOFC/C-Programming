#include<stdio.h>

int main()
{
    int i, count, digit, number, numberClone;

    printf("Find frequency of each digit in a given integer.\n\nNumber: ");
    scanf("%d", &number);

    numberClone = number;

    for(i = 0; i <= 9; i++)
    {
        count = 0;
        number = numberClone;

        while(number != 0)
        {
            digit = (number % 10);
            number = (number / 10);
            //printf("%d, \n", digit);
            if(digit == i)
            {
                count++;
            }
        }
        //if(count > 0) /** This line will be print, if frequency is greater than 0.*/
        {
            printf("Frequency of %d = %d\n", i, count);
        }
    }
    return 0;
}
