// Sort even and odd elements of array separately

#include<stdio.h>

int main()
{
    int i, j, evenCount = 0, oddCount = 0, limit, temp, numbers[100], evenNum[100], oddNum[100];

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

    for(i = 0; i < evenCount; i++)
    {
        for(j = 0; j < evenCount - i - 1; j++)
        {
            if(evenNum[j] > evenNum[j+1])
            {
                temp = evenNum[j];
                evenNum[j] = evenNum[j+1];
                evenNum[j+1] = temp;
            }
        }
    }

    printf("\nSorted even numbers: ");
    for(i = 0; i < evenCount; i++)
    {
        printf("%d ", evenNum[i]);
    }

    printf("\n\nOdd numbers: ");
    for(i = 0; i < oddCount; i++)
    {
        printf("%d ", oddNum[i]);
    }

    for(i = 0; i < oddCount; i++)
    {
        for(j = 0; j < oddCount - i - 1; j++)
        {
            if(oddNum[j] > oddNum[j+1])
            {
                temp = oddNum[j];
                oddNum[j] = oddNum[j+1];
                oddNum[j+1] = temp;
            }
        }
    }

    printf("\nSorted odd numbers: ");
    for(i = 0; i < oddCount; i++)
    {
        printf("%d ", oddNum[i]);
    }
    printf("\n\n");

    return 0;
}
