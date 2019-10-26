#include<stdio.h>
void main()
{
    int row, col, level;
    printf("Print star patterns programs.\n\n");
    scanf("%d", &level, printf("Enter level: "));

    for(row = 1; row <= level; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
