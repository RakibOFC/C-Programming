#include<stdio.h>
void main()
{
    int n, size, arr[100], countEven = 0, countOdd = 0;
    printf("Count total number of even and odd elements in an array.\n\n");
    scanf("%d", &size, printf("Enter array size: "));
    printf("\nEnter any %d numbers: ", size);
    for(n  = 0; n <size; n++)
    {
        scanf("%d", &arr[n]);
    }
    for(n = 0; n < size; n++)
    {
        if(arr[n] % 2 == 0)
        {
            countEven++;
        }
        if(arr[n] % 2 != 0)
        {
            countOdd++;
        }
    }
    printf("\nTotal even number: %d\n\nAnd total odd number: %d\n", countEven, countOdd);
}
