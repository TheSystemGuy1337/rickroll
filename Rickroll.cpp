// Never gonna give you up, never gonna let you down.
// Rickroll.cpp developed by TheSystemGuy.

#include <windows.h>
#include <shellapi.h>

int main()
{
	ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);
}