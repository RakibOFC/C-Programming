// Print Fibonacci series up to n terms

#include<stdio.h>

int main()
{
    int i, limit, first = 0, second = 1, last;

    /*
    FirstNum + LastNum = LastNum
    Fibonacci series: 0 1 1 2 3 5 8 13. . .
    */

    printf("Enter a limit: ");
    scanf("%d", &limit);

    printf("\nFibonacci series: ");
    for(i = 1; i <= limit; i++)
    {
        printf("%d ", first);

        last = first + second;
        first = second;
        second = last;
    }
    printf("\n\n");

    return 0;
}
