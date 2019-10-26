#include<stdio.h>

int main()
{
    int i, j, limit, arr[100], revArray[100];

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("Enter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Copy array elements in revArray for reverse order
    for(i = 0, j = (limit - 1); i < limit; i++, j--)
    {
        revArray[i] = arr[j];
    }

    printf("Array elements after reverse: ");
    for(i = 0; i < limit; i++)
    {
        printf("%d ", revArray[i]);
    }
    printf("\n\n");

    return 0;
}
