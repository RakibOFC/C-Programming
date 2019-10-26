#include<stdio.h>
void main()
{
    int num, n;

    printf("Print all natural numbers in reverse (from n to 1). - using while loop.\n");

    scanf("%d", &num, printf("\nEnter a number: "));

    n = num;

    while(n >= 1)
    {
        printf("\n%d\n", n);
        n--;
    }
}
