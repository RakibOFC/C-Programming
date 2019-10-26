#include<stdio.h>

int main()
{
    int i, j, limit, temp, numbers[100];

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("\nEnter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //Ascending Order
    for(i = 0; i < limit - 1; i++)
    {
        for(j = 0; j < limit - i - 1; j++)
        {
            if(numbers[j] > numbers[j+1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    printf("\nAscending Order: ");
    for(i = 0; i < limit; i++)
    {
        printf("%d ", numbers[i]);
    }

    //Descending Order
    for(i = 0; i < limit - 1; i++)
    {
        for(j = 0; j < limit - i - 1; j++)
        {
            if(numbers[j] < numbers[j+1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    printf("\nDescending Order: ");
    for(i = 0; i < limit; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");

    return 0;
}
