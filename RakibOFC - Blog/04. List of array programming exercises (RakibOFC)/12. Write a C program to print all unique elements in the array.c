// Print all unique elements in the array

#include<stdio.h>

int main()
{
    int i, j, size, arr[100], num[100], count[100] = {0};

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("\nEnter any %d numbers: ", size);
    for(i  = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll unique numbers are: ");
    for(i = 0; i < size; i++)
    {
        num[i] = arr[i];

        for(j = 0; j < size; j++)
        {
            if(arr[j] == num[i])
            {
                count[i]++;
            }
        }
        if(count[i] >= 2);

        else
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n\n");

    return 0;
}
