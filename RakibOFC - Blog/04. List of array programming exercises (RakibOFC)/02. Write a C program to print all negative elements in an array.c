#include<stdio.h>

void main()
{
    int n, size, arr[100];

    printf("Print all negative elements in an array.\n\n");
    printf("Enter array size: ");
    scanf("%d", &size);

    printf("\nEnter any %d numbers: ", size);
    for(n = 0; n < size; n++)
    {
        scanf("%d", &arr[n]);
    }
    printf("\nNegative numbers are: ");
    for(n = 0; n < size; n++)
    {
        if(arr[n] < 0)
        {
            printf("%d ", arr[n]);
        }
    }
    printf("\n");
}
