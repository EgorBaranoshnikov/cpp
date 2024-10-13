#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    long long a, b, sh1, sh2, pm = 0;
    cin >> a;
    long long d[1000];

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        cin >> sh1;
        for (int q = 0; q < b - 1; q++)
        {
            cin >> sh2;
            if (pm == 0)
            {
                sh1 = sh1 - sh2;
                pm = 1;
            }
            else
            {
                sh1 = sh1 + sh2;
                pm = 0;
            }
        }
        d[i] = sh1;
        pm = 0;
    }
    for (int w = 0; w < a; w++)
    {
        cout << d[w] << endl;
    }
}