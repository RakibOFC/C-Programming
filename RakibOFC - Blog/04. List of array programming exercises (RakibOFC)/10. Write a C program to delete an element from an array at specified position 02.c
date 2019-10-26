#include<stdio.h>

void main()
{
    int a[100] = {1, 2, 3, 4, 5}, i, j, size = 5, pos, num = 5;

    printf("Enter array size: ");

    printf("%d\n", num);

    printf("Enter position: ");

    scanf("%d", &pos);

    for (i = pos; i < size; i++)
    {
        a[i - 1] = a[i];
    }
    for(i = 0; i < size - 1; i++)
    {
        printf("%d ", a[i]);
    }
}
