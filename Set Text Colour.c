#include <stdio.h>
#include <windows.h>

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    //CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
//    WORD saved_attributes;

    /* Save current attributes */
    //GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    //saved_attributes = consoleInfo.wAttributes;
    int k;
    for(k = 0; k < 255; k++)
    {
        SetConsoleTextAttribute(hConsole, k);
        printf("This is some nice COLORFUL text = % d\n", k);

        /* Restore original attributes */
    }
    //SetConsoleTextAttribute(hConsole, saved_attributes);
//    printf("Back to normal");

    return 0;
}
