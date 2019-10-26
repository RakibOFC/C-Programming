#include<stdio.h>
void main()
{
    int m, n, size, arr[100], num[100], count[100] = {0};

    printf("Count frequency of each element in an array.\n\n");

    scanf("%d", &size, printf("Enter array size: "));

    printf("\nEnter any %d numbers: ", size);

    for(n  = 0; n <size; n++)
    {
        scanf("%d", &arr[n]);
    }
    for(n = 0; n < size; n++)
    {
        num[n] = arr[n];

        for(m = 0; m < size; m++)
        {
            if(arr[m] == num[n])
            {
                count[n]++;
            }
        }
        printf("Number %d, %d times.\n", arr[n], count[n]);
    }
}
