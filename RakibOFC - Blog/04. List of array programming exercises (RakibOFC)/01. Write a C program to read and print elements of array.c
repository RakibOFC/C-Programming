#include<stdio.h>
void main()
{
    int i, size, arr[100];

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("\nInput: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOutput: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
