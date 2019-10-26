#include<stdio.h>
void main()
{
    /*
    LastDigit = FirstDigit + LastDigit
    Fibonacci Pyramid:
    0
    1 1
    2 3 5
    8 13 21 34
    . . .
    */
    int m, n, first = 0, second = 1, last, level;
    printf("Print Fibonacci Pyramid up to n terms.\n\n");
    scanf("%d", &level, printf("Enter level: "));

    printf("\nFibonacci Pyramid:\n");
    for(m = 1; m <= level; m++)
    {
        for(n = 1; n <= m; n++)
        {
            last = first + second;
            printf("%d ", first);
            first = second;
            second = last;
        }
        printf("\n");
    }
}
