#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long long a, tek, max = 0, max_i = 0;
    int b[200000], c[200000];
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        b[i] = 0;
        c[i] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        cin >> tek;
        c[i] = tek;
        b[tek - 1] = b[tek - 1] + tek;
    }
    for (int i = 0; i < a; i++)
    {
        if (max <= b[i])
        {
            max = b[i];
            max_i = i + 1;
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (c[i] != max_i)
        {
            cout << c[i];
            cout << " ";
        }
    }
}