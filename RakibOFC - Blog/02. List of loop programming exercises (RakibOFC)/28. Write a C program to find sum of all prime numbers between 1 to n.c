#include<stdio.h>

int main()
{
    int i, j, num, sum = 0, isPrime;

    printf("Find sum of all prime numbers between 1 to n.\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        isPrime = 1;
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
                printf("\n%d\n", i);
                sum += i; // sum = sum + i;
            }
        }
    }
    printf("\nSum of all prime numbers between 1 to %d = %d\n", num, sum);
}
