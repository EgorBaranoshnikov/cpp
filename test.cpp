
#include <windows.h>
#include <iostream>

using namespace std;
int main()
{
    int start_1 = 2560, end_1 = 1440, start_2 = 1, end_2 = 1;
    int start_1_1 = 1000, end_1_1 = 1000, start_2_1 = 1, end_2_1 = 1;
    
    int x = rand() % (end_1 - start_1 + 1) + start_1;
    int w = rand() % (end_2 - start_2 + 1) + start_2;
    int e = rand() % (end_1_1 - start_1_1 + 1) + start_1_1;
    int r = rand() % (end_2_1 - start_2_1 + 1) + start_2_1;
    SetCursorPos(x, w);
    Beep(e, r);

    return 0;
}
