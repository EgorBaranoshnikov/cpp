#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

bool IsCube(unsigned long long N)
{
    unsigned long long x = (unsigned long long)pow((double)N, 1. / 3.);
    for (unsigned long long t = x - 1; t <= x + 1; t++)
        if (t * t * t == N)
            return true;
    return false;
}

int main()
{
    unsigned long long kol_ch_1 = 1, kol_ch, pr_tes = 0, ch, test, b, t1, t2, t3, koren;
    string a;

    cin >> a;

    b = stoll(a);
    if (IsCube(b) && a == string(a.rbegin(), a.rend()))
    {
        cout << a;
        return 0;
    }

    koren = trunc(cbrt(b));

    while (koren > 1)
    {
        a = to_string(koren * koren * koren);
        if (IsCube(koren * koren * koren) && a == string(a.rbegin(), a.rend()))
        {
            cout << a;
            return 0;
        }
        koren = koren - 1;
    }
    cout << "1";
}
