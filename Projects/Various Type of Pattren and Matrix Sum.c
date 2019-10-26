#include <stdio.h>
#include <stdlib.h>

void printSquare(int level)
{
    int i, j;

    for(i = 0; i < level; i++)
    {
        for(j = 0; j < level; j++)
        {
            if(i == 0 || i == level - 1)
            {
                printf("* ");
            }
            else if(j == 0 || j == level - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}

void printTriangle(int level)
{
    int i, j;

    for(i = 0; i < level; i++)
    {
        for(j = level - i; j > 0; j--)
        {
            printf(" ");
        }

        for(j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void printDiamond(int level)
{
    int i, j, k = 1;

    for(i = 0; i <= 2 * level; i++)
    {
        if(i <= level)
        {
            for(j = level - i; j >= 0; j--)
            {
                printf(" ");
            }

            for(j = 0; j <= i; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(j = 0; j < k; j++)
            {
                printf(" ");
            }

            for(j = 2 * level; j >= i; j--)
            {
                printf(" *");
            }
            k++;
        }
        printf("\n");
    }
}

void printMatrixSum(int level)
{
    int i, j, a[100][100], b[100][100], c[100][100];

    printf("Enter First Matrix:\n");
    for(i = 0; i < level; i++)
    {
        for(j = 0; j < level; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter Second Matrix:\n");
    for(i = 0; i < level; i++)
    {
        for(j = 0; j < level; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nResult:\n");
    for(i = 0; i < level; i++)
    {
        for(j = 0; j < level; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}

void main()
{
    int option, level;

a:

    printf("1. Square\n");
    printf("2. Triangle\n");
    printf("3. Diamond\n");
    printf("4. Add Two Matrices\n\n");

    printf("Please Choose One Of The Options To Print: ");
    scanf("%d", &option);

    switch(option)
    {
    case 1:
        printf("Please Enter A Level/Limit: ");
        scanf("%d", &level);
        printf("\n\n");
        printSquare(level);
        break;

    case 2:
        printf("Please Enter A Level/Limit: ");
        scanf("%d", &level);
        printf("\n\n");
        printTriangle(level);
        break;

    case 3:
        printf("Please Enter A Level/Limit: ");
        scanf("%d", &level);
        printf("\n\n");
        printDiamond(level);
        break;

    case 4:
        printf("Please Enter A Level/Limit: ");
        scanf("%d", &level);
        printf("\n\n");
        printMatrixSum(level);
        break;

    default:
        printf("\nInvalid Option!\n\n");
        goto a;
    }
}
