#include<stdio.h>
void main()
{
    int n, size, arr[100], countNeg = 0;
    printf("Count total number of negative elements in an array.\n\n");
    scanf("%d", &size, printf("Enter array size: "));
    printf("\nEnter any %d numbers: ", size);
    for(n  = 0; n <size; n++)
    {
        scanf("%d", &arr[n]);
    }
    for(n = 0; n < size; n++)
    {
        if(arr[n] < 0)
        {
            countNeg++;
        }
    }
    printf("\nTotal negative element: %d\n", countNeg);
}
