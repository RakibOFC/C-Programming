#include<stdio.h>

int main()
{
    int i, number = 100;

    printf("Find all factors of a number.\n\nNumber: ");
    scanf("%d", &number);

    printf("Factors are: ");
    for(i = 1; i <= number; i++)
    {
        if((number % i) == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n\n");

    return 0;
}
