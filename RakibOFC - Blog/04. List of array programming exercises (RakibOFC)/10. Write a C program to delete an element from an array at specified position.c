#include<stdio.h>
void main()
{
    int n, size, arr[100], pos;

    printf("Delete an element from an array at specified position.\n\n");

    scanf("%d", &size, printf("Enter array size: "));

    printf("\nEnter any %d numbers: ", size);

    for(n  = 0; n <size; n++)
    {
        scanf("%d", &arr[n]);
    }

    scanf("%d", &pos, printf("\nEnter position for delete an element: "));

    printf("\nAfter delete an element: ");

    for(n = 0; n < size; n++)
    {
        if(pos == n + 1);

        else
        {
            printf("%d ", arr[n]);
        }
    }
    printf("\n");
}
