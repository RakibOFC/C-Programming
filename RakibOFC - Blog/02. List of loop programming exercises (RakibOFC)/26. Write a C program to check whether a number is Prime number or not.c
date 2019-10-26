#include<stdio.h>

int main()
{
    int n, num, isPrime = 1;

    printf("Check whether a number is Prime number or not.\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    for(n = 2; n < num; n++)
    {
        if(num % n == 0)
        {
            isPrime = 0;
        }
    }
    if(isPrime == 1)
    {
        printf("\n%d is prime a number.\n", num);
    }
    else
    {
        printf("\n%d is not prime number.\n", num);
    }
    return 0;
}
