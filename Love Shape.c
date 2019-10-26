#include<stdio.h>
void main ()
{
    char name[10];
    printf("Please enter a name: ");
    a:
    scanf("%s", name);
    printf("\n");
    int i, j, k, l, m, n, x, y=1, num=10;
    if(strcmp(name, "Arha")==0)
    {
        for (n = 3; n <= 5; n++)
        {
            for (l = 4 ; l >= n ; l--)
            {
                printf (" ");
            }
            for (m = 2; m <= 2*n-1; m++)
            {
                printf ("*");
            }
            for(x=2*n-1; x>=y; x--)
            {
                printf(" ");
            }
            y=y+4;
            for (m = 1; m <= 2*n-1; m++)
            {
                printf ("*");
            }
            printf("\n");
        }
        for (i = 1; i <= num; i++)
        {
            if(i==1)
            {
                printf("*******Arha********\n");
            }
            else
            {
                for (j = 1; j <= i - 1; j++)
                {
                    printf (" ");
                }
                for (k = 2 * num - 1; k >= 2 * i - 1; k--)
                {
                    printf ("*");
                }
                printf ("\n");
            }
        }
    }
    else
    {
        printf("Life can't alive without Arha :(\n\nPlease Type \"Arha\"...");
        goto a;
    }
    printf("\n\n\n\n\n");
}
