#define WINVER 0x0500
#include <windows.h>

int main ()
{
	// Get console window handle
	HWND wh = GetConsoleWindow();
	// Move window to required position
	MoveWindow(wh, 100, 100, 1300, 800, TRUE);
}

