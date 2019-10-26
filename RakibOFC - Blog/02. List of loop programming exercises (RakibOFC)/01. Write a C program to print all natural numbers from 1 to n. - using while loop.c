#include<stdio.h>

int main()
{
    int num, n;

    printf("Print all natural numbers from 1 to n. - using while loop.\n");
    printf("\nEnter a number: ");
    scanf("%d", &num);

    n = 1;

    while(n <= num)
    {
        printf("\n%d\n", n);
        n++;
    }
    return 0;
}
