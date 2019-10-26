#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, digit, number, numberClone, count = 0, newNumber = 0, temp;

    printf("Check whether a number is Armstrong number or not.\n\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    numberClone = number;

    while(number != 0)
    {
        digit = (number % 10);
        newNumber = newNumber;
        number /= 10; /// Or, number = number / 10;
        count++;
    }

    number = numberClone;
    while(number != 0)
    {
        digit = (number % 10);
        temp = pow(digit, count);
        newNumber += temp;
        number /= 10; /// Or, number = number / 10;
    }

    number = numberClone;
    if(newNumber == number)
    {
        printf("\n%d is a Armstrong a number!\n\n", number);
    }
    else
    {
        printf("\n%d is a Armstrong not a number!\n\n", number);
    }
}
