#include<stdio.h>
void main()
{
    int n, num, count = 0;

    printf("Count number of digits in a number.\n");

    scanf("%d", &num, printf("\nEnter number: "));

    for(n = 1; num != 0; n++)
    {
        num = num / 10;

        count++;
    }
    printf("\nTotal %d digit(s).\n", count);
}
