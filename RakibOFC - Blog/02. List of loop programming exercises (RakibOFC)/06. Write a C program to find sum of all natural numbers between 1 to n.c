#include<stdio.h>
void main()
{
    int n, num, sum = 0;
    printf("Find sum of all natural numbers between 1 to n.\n");

    scanf("%d", &num, printf("\nEnter a number: "));

    printf("\nNatural numbers are...\n");

    for(n = 1; n <= num; n++)
    {
        sum += n; // Or, sum = sum + n;
        printf("\n%d\n", n);
    }
    printf("\nSum: %d\n", sum);
}
