#include<stdio.h>
void main()
{
    int i, j, num, a[100][100], row, col;

    printf("Enter matrix size: ");
    scanf("%d", &num);

    printf("Elements:\n");
    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter row number: ");

    scanf("%d", &row);

    printf("Enter column number: ");
    scanf("%d", &col);

    printf("\nElement: %d\n\n", a[row][col]);
}
