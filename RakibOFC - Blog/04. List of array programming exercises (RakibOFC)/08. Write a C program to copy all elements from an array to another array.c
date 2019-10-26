#include<stdio.h>
void main()
{
    int n, size, arr[100], arr2[100];
    printf("Copy all elements from an array to another array.\n\n");
    scanf("%d", &size, printf("Enter array size: "));
    printf("\nEnter any %d numbers: ", size);
    for(n  = 0; n <size; n++)
    {
        scanf("%d", &arr[n]);
    }
    printf("\nAfter copy all numbers: ");
    for(n = 0; n < size; n++)
    {
        arr2[n] = arr[n];
        printf("%d ", arr2[n]);
    }
    printf("\n");
}
