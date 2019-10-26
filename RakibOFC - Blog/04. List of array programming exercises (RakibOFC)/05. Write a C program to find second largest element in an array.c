#include<stdio.h>
void main()
{
    int n, size, arr[100], max, max2;
    printf("Find second largest element in an array(For all positive number).\n\n");
    scanf("%d", &size, printf("Enter array size: "));

    printf("\nEnter any %d numbers: ", size);
    for(n = 0; n < size; n++)
    {
        scanf("%d", &arr[n]);
    }
    max = max2 = 0;
    for(n = 0; n < size; n++)
    {
        if(max < arr[n])
        {
            max = arr[n];
        }
    }
    for(n = 0; n < size; n++)
    {
        if(arr[n] == max);
        else if(max2 < arr[n])
        {
            max2 = arr[n];
        }
    }
    printf("\nMaximum: %d\n\nSecond Maximum: %d\n", max, max2);
}
