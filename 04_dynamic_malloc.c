#include<stdio.h>

void main()
{
    int n, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));

        sum += *(ptr + i);
    }
    printf("\n");

    printf("Sum: %d\n", sum);

    free(ptr);
}
