#include<stdio.h>

int main()
{
    int i, size, arr[50], sum = 0, avg, count = 0;

    printf("Array element: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / size;

    for(i = 0; i < size; i++)
    {
        if(avg > arr[i])
        {
            count++;
        }
    }
    printf("\nNumbers greater than average value: %d\n", count);

    printf("Reversed array: ");
    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}
