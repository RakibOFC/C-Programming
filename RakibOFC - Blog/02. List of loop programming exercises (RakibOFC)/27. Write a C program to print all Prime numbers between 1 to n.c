#include<stdio.h>

int main()
{
    int i, j, num;

    printf("Print all Prime numbers between 1 to n.\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers are:\n");
    for(i = 1; i <= num; i++)
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
                printf("\n%d\n", i);
            }
        }
    }
    return 0;
}
