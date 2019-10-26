#include<stdio.h>

int main()
{
    int i, j, number, isPrime;

    printf("Find all prime factors of a number.\n\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime factors of %d: ", number);
    for(i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            int isPrime = 1;
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                }
            }
            if(isPrime == 1)
            {
                if(i == 1)
                {
                    /**
                    * 1 is not a prime number
                    */
                }
                else
                {
                    printf("%d ", i);
                }
            }
        }
    }
    printf("\n\n");

    return 0;
}
