// Left rotate an array

#include<stdio.h>

int main()
{
    int i, j, k, limit, rotate, numbers[100], new_numbers[100];

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("\nEnter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Enter number to rotate: ");
    scanf("%d", &rotate);

    j = rotate;
    k = 0;

    for(i = 0; i < limit; i++)
    {
        if(j >= limit)
        {
            new_numbers[i] = numbers[k++];
        }
        else
        {
            new_numbers[i] = numbers[j++];
        }
    }

    printf("Array after left rotation: ");
    for(i = 0; i < limit; i++)
    {
        printf("%d ", new_numbers[i]);
    }
    printf("\n\n");

    return 0;
}
