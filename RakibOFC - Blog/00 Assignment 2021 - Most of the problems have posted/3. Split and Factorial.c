#include<stdio.h>

int arr[100], factorialSum = 0;

int calculate_sum(int n)
{
    factorialSum = factorialSum + n;
}

int find_factorial(int f)
{
    int fact = 1;

    for(int i = 1; i <= f; i++)
    {
        fact = fact * i;
    }
    calculate_sum(fact);
}

int splitter(int number)
{
    int i = 0, digit = 0;
    while(number != 0)
    {
        arr[i++] = number % 10;
        number = number/10;
        digit++;
    }
    return digit;
}

int main()
{
    int number, digit;

    printf("Input Number: ");
    scanf("%d", &number);

    digit = splitter(number);

    for(int i = 0; i < digit; i++)
    {
        find_factorial(arr[i]);
    }

    printf("Output : %d\n\n", factorialSum);
}
