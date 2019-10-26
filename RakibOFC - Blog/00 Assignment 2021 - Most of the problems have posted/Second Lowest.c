#include<stdio.h>
#include <stdbool.h>

void main()
{
    int i, j, size, smallest, second_smallest, array[100];
    bool isDuplicate = false;

    printf("Enter size: ");
    scanf("%d", &size);

    printf("\nEnter elements: ", size);
    for (i = 0 ; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    if (array[0] < array[1])
    {
        smallest = array[0];
        second_smallest = array[1];
    }
    else
    {
        smallest = array[1];
        second_smallest = array[0];
    }
    for (i = 2; i < size; i++)
    {
        if (array[i] < smallest)
        {
            second_smallest = smallest;
            smallest = array[i];
        }
        else if (array[i] < second_smallest)
        {
            second_smallest = array[i];
        }
    }
    for(i = 0; i <size; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(array[i] == array[j] && i != j)
            {
                isDuplicate = true;
            }
        }
    }
    if(isDuplicate == true)
    {
        printf("Second lowest number: %d", second_smallest);
        printf("\nDuplicate elements: YES");
    }
    else
    {
        printf("Second lowest number: %d", second_smallest);
        printf("\nDuplicate elements: NO");
    }
    printf("\n\n");
}
