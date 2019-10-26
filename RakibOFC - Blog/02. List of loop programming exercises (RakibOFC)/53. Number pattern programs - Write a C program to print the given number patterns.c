#include<stdio.h>
void main()
{
    int row, col, level;
    printf("Print number pattern programs.\n\n");
    scanf("%d", &level, printf("Enter level:"));

    for(row = 1; row <= level; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
}
