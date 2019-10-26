#include<stdio.h>
void main()
{
    int a[100] = {1, 2, 3, 4, 5}, i, j, size = 5, pos, num = 5;

    printf("Enter number to insert: ");

    printf("%d\n", num);

    printf("Enter position: ");

    scanf("%d", &pos);

    for (i = size - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = num;

    for(i = 0; i <= size; i++)
    {
        printf("%d ", a[i]);
    }
}
