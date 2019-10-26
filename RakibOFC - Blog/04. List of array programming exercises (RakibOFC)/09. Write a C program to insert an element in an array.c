#include<stdio.h>
void main()
{
    int n, size, arr[100], pos, num;

    printf("Insert an element in an array.\n\n");

    scanf("%d", &size, printf("Enter array size: "));

    printf("\nEnter any %d numbers: ", size);

    for(n  = 0; n <size; n++)
    {
        scanf("%d", &arr[n]);
    }
    scanf("%d", &num, printf("\nEnter a number: "));

    scanf("%d", &pos, printf("\nEnter position: "));

    printf("\nAfter insert an element: ");

    for(n = 0; n < size; n++)
    {
        if(pos == n + 1)
        {
            printf("%d ", num);
        }
        printf("%d ", arr[n]);
    }
    printf("\n");
}
