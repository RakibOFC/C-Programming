#include<stdio.h>

int main()
{
    int i, j, k, limit, temp, swap, arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("Enter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < limit; i++)
    {
        temp = arr[i];

        for(j = 0; j < limit; j++)
        {
            if(i != j)
            {
                if(temp == arr[j])
                {
                    --limit;
                    for(k = limit; k >= j; k--)
                    {
                        swap = arr[limit];
                        arr[limit] = arr[j];
                        arr[j] = swap;
                    }
                }
            }
        }
    }

    printf("After delete all duplicate elements: ");
    for(i = 0; i < limit; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}
