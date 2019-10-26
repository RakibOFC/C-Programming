#include<stdio.h>
void main()
{
    int n, size, arr[100], sum = 0;
    printf("Sum of all array elements.\n\n");
    scanf("%d", &size, printf("Enter array size: "));
    printf("\nEnter any %d numbers: ", size);
    for(n = 0; n < size; n++)
    {
        scanf("%d", &arr[n]);
    }
    for(n = 0; n < size; n++)
    {
        sum += arr[n];
    }
    printf("\nSum of %d numbers: %d ", size,  sum);
    printf("\n");
}
