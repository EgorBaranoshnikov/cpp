#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    ifstream fin("input.txt");

    string strh, a;
    int b, otv, ind, tek;
    getline(fin, strh);

    b = strh.length();

    ind = 1;
    otv = 0;
    for (int ind = 0; ind < b; ++ind)
    {
        a = strh[ind];
        if (a == "1")
        {
            tek = 0;
        }
        if (strh[ind] == "0"[0])
        {
            tek = tek + 1;
            if (tek > otv)
            {
                otv = otv + 1;
            }
        }
    }
    cout << otv;
}