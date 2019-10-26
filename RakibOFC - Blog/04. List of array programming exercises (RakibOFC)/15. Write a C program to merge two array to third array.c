#include<stdio.h>
void main()
{
    int i, j, limit, arr1[100], arr2[100], arr3[100];

    printf("Merge two array to third array.\n\n");

    printf("Enter array size: ");
    scanf("%d", &limit);

    printf("\nEnter first array: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter second array: ");
    for(i  = 0; i < limit; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // 1 2 3 && 4 5 6
    // Copy first array in third array
    for(i = 0; i < limit; i++)
    {
        arr3[i] = arr1[i];
    }

    // Copy first second in third array
    for(i = limit, j = 0; i < (limit * 2); i++, j++)
    {
        arr3[i] = arr2[j];
    }

    printf("\nAfter merge two array: ");
    for(i = 0; i < (limit * 2); i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n\n");
}
