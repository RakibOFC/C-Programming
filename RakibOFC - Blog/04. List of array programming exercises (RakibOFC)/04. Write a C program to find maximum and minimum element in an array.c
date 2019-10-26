#include<stdio.h>
void main()
{
    int n, size, arr[100], max, min;
    printf("Find maximum and minimum element in an array.\n\n");
    scanf("%d", &size, printf("Enter array size: "));

    printf("\nEnter any %d numbers: ", size);
    for(n = 0; n < size; n++)
    {
        scanf("%d", &arr[n]);
    }
    max = min = arr[0];

    for(n = 0; n < size; n++)
    {
        if(max < arr[n])
        {
            max = arr[n];
        }
        if(min > arr[n])
        {
            min = arr[n];
        }
    }
    printf("\nMaximum: %d\n\nMinimum: %d\n", max, min);
}
