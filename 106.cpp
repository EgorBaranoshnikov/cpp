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
    int a, b, op = 0, pe = 0;

    fin >> a;
    for (int i = 1; i <= a; ++i)
    {
        fin >> b;
        if (b == 1)
        {
            op = op + 1;
        }
        else
        {
            pe = pe + 1;
        }
    }
    if (op < pe)
    {
        cout << op;
    }
    else
    {
        cout << pe;
    }
}