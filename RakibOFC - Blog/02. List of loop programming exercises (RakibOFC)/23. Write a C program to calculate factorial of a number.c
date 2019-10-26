#include<stdio.h>

int main()
{
    int n, num, fact = 1;

    printf("Calculate factorial of a number.\n\nNumber: ");
    scanf("%d", &num);

    for(n = 1; n <= num; n++)
    {
        fact = fact * n;
    }
    printf("\nFactorial of %d = %d\n", num, fact);

    return 0;
}
