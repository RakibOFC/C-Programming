#include<stdio.h>
#include<windows.h>

int i, j, option, nameSize = 0;
char name[10];
void space()
{
    /* Space */
    for(j = 1; j <= 3 ; j++)
    {
        printf(" ");
    }
}
int main()
{
    printf("Enter name: ");
    scanf("%s", name);

    for(i = 1; i <= 10; ++i)
    {
        space();
        /* A Shape */
        for(j = 1; j <= 7; ++j)
        {
            if(i == 1 && j != 1 && j != 7 || i == 2 || j == 2 || j == 1 && i != 1 || j == 6 || j == 7 && i != 1 || i == 5 || i == 6)
            {
                {
                    printf("A ");
                }
            }
            else
            {
                printf("  ");
            }
        }
        space();
        /* B Shape */
        for(j = 1; j <= 7; ++j)
        {
            if(i == 1 && j != 7 || i == 2 || j == 7 && i != 1 && i != 5 && i != 6 && i != 10 || j == 1 || j == 2 || j == 6 || i == 5 && j != 7 || i == 6 && j != 7 || i == 9 || i == 10 && j != 7)
            {
                printf("B ");
            }
            else
            {
                printf("  ");
            }
        }
        space();
        /* C Shape */
        for(j = 1; j <= 7; ++j)
        {
            if(i == 1 && j != 1 && j != 7 || i == 2 || j == 7 && i != 1 && i != 4 && i != 5 && i != 6 && i != 7 && i != 10 || j == 1 && i != 1 && i != 10
                    || j == 2 || j == 6 && i != 4 && i != 5 && i != 6 && i != 7 || i == 9 || i == 10 && j != 7 && j != 1)
            {
                printf("C ");
            }
            else
            {
                printf("  ");
            }
        }
        space();
        /* H Shape */
        for(j = 1; j <= 7 ; j++)
        {
            if(i == 5 || i == 6|| j == 1 || j == 2 || j == 6 || j == 7)
            {
                printf("H ");
            }
            else
            {
                printf("  ");
            }
        }
        space();
        /* R Shape */
        for(j = 1; j <= 7; ++j)
        {
            if(i == 1 && j != 7 || i == 2 || j == 7 && i != 1 && i != 5 && i != 6 || j == 1 || j == 2 || j == 6 || i == 5 && j != 7 || i == 6 && j != 7)
            {
                printf("R ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n\n\n\n");
}
