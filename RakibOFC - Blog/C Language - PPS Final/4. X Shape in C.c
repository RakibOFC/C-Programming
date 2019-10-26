#include<stdio.h>

int main()
{
    int i, j, k, rows;

    printf("Enter number of rows\n");
    scanf("%d", &rows);
    printf("\n");

    for(i = rows, k = 1; i >= 1; i--, k++)
    {
        for(j = rows; j >= 1; j--)
        {
            if(i == j || j == k)
            {
                printf("%d", i);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
