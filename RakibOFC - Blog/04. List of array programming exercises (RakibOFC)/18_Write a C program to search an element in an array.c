#include<stdio.h>

int main()
{
    int i, limit, search_val, isFound = 0, numbers[100];

    printf("Enter the size of array: ");
    scanf("%d", &limit);

    printf("\nEnter the array elemnts: ");
    for(i = 0; i < limit; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Search: ");
    scanf("%d", &search_val);

    for(i = 0; i < limit; i++)
    {
        if(search_val == numbers[i])
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        printf("\n%d found in list!\n\n", search_val);
    }
    else
    {
        printf("\nNot found.\n\n");
    }

    return 0;
}
