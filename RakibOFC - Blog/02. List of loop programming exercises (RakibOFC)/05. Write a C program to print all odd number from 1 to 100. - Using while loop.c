#include<stdio.h>
void main()
{
    int num, n;

    printf("Print all odd numbers from 1 to 100. - Using while loop.\n");

    printf("\nStart...\n");

    n = 1;

    while(n <= 100)
    {
        if(n % 2 != 0)
        {
            printf("\n%d\n", n);
        }
        n++;
    }
}
