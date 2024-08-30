#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    long long a, b = 3, c = 0, kol, otv = 0;
    fin >> kol;
    for (int i = 0; i < kol; i++)
    {
        fin >> a;
        if (a == 1)
        {
            c = c + b;
            otv = otv + b;
            b = b + 1;
        }
        if (a == 0)
        {
            b = b - 3;
            if (b < 3)
            {
                b = 3;
            }
        }
    }
    cout << otv;
}

