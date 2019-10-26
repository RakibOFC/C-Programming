#include<stdio.h>
void main()
{
    int n, num, size;

    printf("Print multiplication table of any number.\n");

    scanf("%d", &num, printf("\nEnter a number: "));

    scanf("%d", &size, printf("Enter size: "));

    for(n = 1; n <= size; n++)
    {
        printf("\n%d * %d = %d\n", num, n, num * n);
    }
}
