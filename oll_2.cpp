#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    long long a, b2 = 0, b1 = 0, c1 = 0, c2 = 0, q, otv = 0;
    cin >> a;

    cin >> q;
    cin >> c1;
    cin >> c2;
    for (int i = 0; i < a; i++)
    {

        int w = c1 + c2;
        int e = b2 + b1;

        if (w < q && e < q)
        {
            otv += 1;
        }
        b2 = b1;
        b1 = q;
        q = c1;
        c1 = c2;
        if (i < a - 3)
        {
            cin >> c2;
        }
        else
        {
            c2 = 0;
        }
    }
    cout << otv;
}