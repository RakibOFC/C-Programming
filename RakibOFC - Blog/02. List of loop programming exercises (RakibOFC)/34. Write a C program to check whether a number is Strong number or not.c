// Check whether a number is Strong number or not

#include<stdio.h>
#include<math.h>

int main()
{
    int i, number, numberClone, digit, sum = 0, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    numberClone = number;

    while(number != 0)
    {
        digit = (number % 10);
        number = (number / 10);

        // Sum of the factorial of the individual digits
        for(i = 1; i <= digit; i++)
        {
            factorial = (factorial * i);
        }
        sum = (sum + factorial);

        factorial = 1; // Reset value
    }
    if(numberClone == sum)
    {
        printf("\n%d is a Strong number!\n\n", numberClone);
    }
    else
    {
        printf("\n%d is not a Strong number.\n\n", numberClone);
    }

    return 0;
}
