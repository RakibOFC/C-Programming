#include<stdio.h>
#include<windows.h>
int main()
{
    int i, j, size = 9, last = 0;
    /*



    */
    main:
    for(i = 1; i <= 10; ++i)
    {
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
        /* Space */
        for(j = 1; j <= 3 ; j++)
        {
            printf(" ");
        }
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
        /* Space */
        for(j = 1; j <= 3 ; j++)
        {
            printf(" ");
        }
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
        /* Space */
        for(j = 1; j <= 3; j++)
        {
            printf(" ");
        }
        /* A Shape */
        for(j = 1; j <= 7; ++j)
        {
            if(i == 1 && j != 1 && j != 7 || i == 2 || j == 2 || j == 1 && i != 1 || j == 6 || j == 7 && i != 1 || i == 5 || i == 6)
            {
                printf("A ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    Sleep(1000);
    //printf("\n\n\n\n\n\n");
    system("cls");
    goto main;
}
