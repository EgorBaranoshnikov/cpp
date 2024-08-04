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
    int a, b, tek, max = 0, max_str = 0, max_sto = 0, str = 1, sto = 1;

    fin >> a;
    fin >> b;
    for (int i = 1; i <= a; ++i)
    {
        for (int i = 1; i <= b; ++i)
        {
            fin >> tek;
            if (max < tek)
            {
                max = tek;
                max_str = str;
                max_sto = sto;
            }
            sto = sto += 1;
        }
        str = str + 1;
        sto = 1;
    }
    cout << max_str - 1 << " " << max_sto - 1;
}