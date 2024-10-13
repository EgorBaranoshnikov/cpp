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

    cin >> b2;
    cin >> b1;
    cin >> q;
    cin >> c1;
    for (int i = 0; i < a - 4; i++)
    {
        cin >> c2;
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
    }
    cout << otv;
}