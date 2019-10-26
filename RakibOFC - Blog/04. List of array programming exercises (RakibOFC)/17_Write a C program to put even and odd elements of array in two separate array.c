#include<stdio.h>

int main()
{
    int i, evenCount = 0, oddCount = 0, limit, numbers[100], evenNum[100], oddNum[100];

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("\nEnter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // Separate even numbers and odd numbers from first array
    for(i = 0; i < limit; i++)
    {
        if((numbers[i] % 2) == 0)
        {
            evenNum[evenCount] = numbers[i];
            evenCount++;
        }
        else
        {
            oddNum[oddCount] = numbers[i];
            oddCount++;
        }
    }

    printf("\nEven numbers: ");
    for(i = 0; i < evenCount; i++)
    {
        printf("%d ", evenNum[i]);
    }

    printf("\nOdd numbers: ");
    for(i = 0; i < oddCount; i++)
    {
        printf("%d ", oddNum[i]);
    }
    printf("\n\n");

    return 0;
}
