#include<stdio.h>
#include<windows.h>
COORD coord = {2,2};
void setColRow(int col, int row)
{
    coord.X = col;
    coord.Y = row;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int i, j, size = 12;

    for(i = 1; i <= size; i++)
    {
        for(j = 1; j <= size*5; j++)
        {
            if(j == 1 && i != 1 && i != size || j == size*5 && i != 1 && i != size)
            {
                printf("%c", 186);
            }
            else if(i == 1 && j == size*5)
            {
                printf("%c", 187);
            }
            else if(j == size*5 && i == size)
            {
                printf("%c", 188);
            }
            else if(j == 1 && i == size)
            {
                printf("%c", 200);
            }
            else if(i == 1 && j == 1)
            {
                printf("%c", 201);
            }
            else if(i == 1&& j != size*5 && j != 1 || i == size)
            {
                printf("%c", 205);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    setColRow(24, 0);printf("About Author");
    setColRow(7, 2);printf("Rakibul Islam | Green University of Bangladesh");
    setColRow(25, 4);printf("@RakibOFC");
    setColRow(10, 6);printf("Facebook | Instagram | Youtube | Twitter");
    setColRow(15, 8);printf("Website: seesysco.blogspot.com");
    setColRow(14, 10);system("PAUSE");
    printf("\n\n\n\n\n");
    /*
    for(i = 1; i <= 10; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            if(i == 1 && j != )
        }
        printf("\n");
    }

    printf("%c", 201);
    for(i = 0; i < 5; i++)
    {
        printf("%c", 205);
    }
    printf("%c", 187);
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf("%c\n", 186);
    }
    printf("%c", 200);
    for(i = 0; i < 5; i++)
    {
        printf("%c", 205);
    }
    printf("%c", 188);
    scanf("%d", i);
    */
}
