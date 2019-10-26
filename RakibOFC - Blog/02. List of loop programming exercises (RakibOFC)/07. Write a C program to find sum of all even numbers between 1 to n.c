#include<stdio.h>
void main()
{
    int n, num, sum = 0;

    printf("Find sum of all even numbers between 1 to n.\n");

    scanf("%d", &num, printf("\nEnter a number: "));

    printf("\nEven numbers are...\n");

    for(n = 1; n <= num; n++)
    {
        if(n % 2 == 0)
        {
            sum += n; // Or, sum = sum + n;

            printf("\n%d\n", n);
        }
    }
    printf("\nSum: %d\n", sum);
}
