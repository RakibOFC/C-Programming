#include<stdio.h>
#include <windows.h>

int main(int argc, int *argv[]){
    POINT pt;
    GetCursorPos(&pt);
    printf("Current cursor position (%d, %d)\n", pt.x, pt.y);
    pt.x = 100;
    pt.y = 100;
    SetCursorPos(pt.x, pt.y);
    GetCursorPos(&pt);
    printf("Current cursor position (%d, %d)\n", pt.x, pt.y);
    system("pause");
 }
