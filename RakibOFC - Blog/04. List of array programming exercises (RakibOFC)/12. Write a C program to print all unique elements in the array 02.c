#include<stdio.h>
void main()
{
    int i, j, size, arr[100], isUnique;

    printf("Print all unique elements in the array.\n\n");

    scanf("%d", &size, printf("Enter array size: "));

    printf("\nEnter any %d numbers: ", size);

    for(i  = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll unique numbers are:\n\n");

    for(i = 0; i < size; i++)
    {
        isUnique = 1;

        for(j = 0; j < size; j++)
        {
            if(arr[i] == arr[j] && i != j)
            {
                isUnique = 0;
            }
        }
        if(isUnique == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
