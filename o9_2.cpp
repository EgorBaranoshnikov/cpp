#include <iostream>

using namespace std;

int main()
{
    long a, b, min_r, min_sh = 101, tek_sh, j;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> tek_sh;
            if (tek_sh < min_sh)
            {
                min_sh = tek_sh;
                min_r = j + 1;
            }
        }
    }
    cout << min_r;
}