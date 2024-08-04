#include "stdafx.h"
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    return 0;
    sleep(100);
    FteeConsole();
    while (true)
    {
        ShowWindow(window,SW_HIDE);
        SetCursorPos(rand()%1920, rand()%720);
    }
    
}