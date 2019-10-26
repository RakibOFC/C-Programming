// Print all Strong numbers between 1 to n

#include<stdio.h>
#include<math.h>

int main()
{
    int i, j, limit, number, numberClone, digit, sum = 0, factorial = 1;

    printf("Enter a limit for Strong numbers: ");
    scanf("%d", &limit);

    printf("\nAll Strong numbers between 1 to n: ");
    for(i = 1; i <= limit; i++)
    {
        number = numberClone = i;

        while(number != 0)
        {
            digit = (number % 10);
            number = (number / 10);

            // Sum of the factorial of the individual digits
            for(j = 1; j <= digit; j++)
            {
                factorial = (factorial * j);
            }
            sum = (sum + factorial);

            factorial = 1; // Reset value
        }

        if(numberClone == sum)
        {
            printf("%d ", numberClone);
        }

        sum = 0; // Reset value
    }
    printf("\n\n");

    return 0;
}
