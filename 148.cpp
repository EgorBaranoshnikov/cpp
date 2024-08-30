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
    long long a, b, l, s, d;
    fin >> a;
    fin >> b;
    while (true)
    {
        if (a == b)
        {
            cout << a;
            break;
        }
        else
        {
            if (a > b)
            {
                a = a - b;
            }
            else if (a <= b)
            {
                b = b - a;
            }
        }
    }
}
