#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long long a, b, otv;
    long long prom;
    long long w;

    cin >> a;
    vector<int> power(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b;

        prom = (b / 2) * (b + 1);
        if (b % 2 == 1)
        {
            prom = prom + ((b + 1) / 2);
        }

        w = sqrt(b) * 2;
        w = (w * 2) - 1;

        otv = prom - (w * 2);
        power[i] = otv;
    }
    for (int i = 0; i < a; i++)
    {
        cout << power[i] << endl;
    }
}  