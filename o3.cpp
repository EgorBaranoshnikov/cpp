#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, tek = 0, kol = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    tek = a;
    for (int i = 0; i < c; i++)
    {
        kol = kol + tek;
        tek = tek + a;
    }
    kol = kol - b;

    if (kol < 0)
    {
        cout << 0;
    }
    else
    {
        cout << kol;
    }
}