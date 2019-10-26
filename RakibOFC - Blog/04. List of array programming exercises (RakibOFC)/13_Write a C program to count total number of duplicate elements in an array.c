// Count total number of duplicate elements in an array

#include<stdio.h>

int main()
{
    int i, j, limit, count, numbers[100], isDuplicate[] = {0};

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("\nEnter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &numbers[i]);
    }

    // numbers = 1, 2, 1, 4, 1, 4
    for(i = 0; i < limit; i++)
    {
        for(j = i+1; j < limit; j++)
        {
            if(numbers[i] == numbers[j] && isDuplicate[i] == 0)
            {
                count++;

            }
        }
    }

    printf("\nTotal %d duplicate elements.\n\n", isDuplicate[0]);

    return 0;
}
