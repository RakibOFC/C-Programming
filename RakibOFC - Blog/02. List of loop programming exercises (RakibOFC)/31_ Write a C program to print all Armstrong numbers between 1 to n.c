//Print all Armstrong numbers between 1 to n

#include<stdio.h>
#include<math.h>

int main()
{
    int i, limit, number, numberClone, digit, count = 0, newNumber = 0;

    printf("Enter a limit for armstrong numbers: ");
    scanf("%d", &limit);

    printf("\nAll armstrong numbers 1 to %d: ", limit);
    for(i = 1; i <= limit; i++)
    {
        number = i;
        numberClone = number;
        while(number != 0)
        {
            digit = (number%10);
            number /= 10;
            count++;
        }

        number = numberClone;
        while(number != 0)
        {
            digit = (number%10);
            number /= 10;

            newNumber += pow(digit, count);
        }

        if(numberClone == newNumber)
        {
            printf("%d ", newNumber);
        }

        count = 0;
        newNumber = 0;
    }
    printf("\n\n");

    return 0;
}
