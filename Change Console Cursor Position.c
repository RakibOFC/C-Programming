#include<stdio.h>
#include<windows.h>

COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int col, int row)
{
    coord.X = col;
    coord.Y = row; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    int col = 0, row = 10;
    gotoxy(col, row);printf("RakibYo");
    gotoxy(col+8, row);printf("Arha");
}
