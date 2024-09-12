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
    unsigned long long kol_ch_1 = 1, kol_ch, pr_tes = 0, ch, test, b, t1, t2, t3;
    string a;

    cin >> a;

    b = stoll(a);
    b = cbrt(b);
    b = b + 1;
    b = b * b * b;
    if (!IsCube(b) && b <= 1000000000000000000)
    {
        b = b + 1;
        b = stoll(a);
        b = cbrt(b);
        b = b + 1;
        b = b * b * b;
    }
    if (!IsCube(b) && b <= 1000000000000000000)
    {
        b = b - 2;
        b = stoll(a);
        b = cbrt(b);
        b = b + 1;
        b = b * b * b;
    }
    a = to_string(b);

    while (b >= 1)
    {
        b = stoll(a);
        b = cbrt(b);
        b = b - 1;
        b = b * b * b;
        if (!IsCube(b) && b <= 1000000000000000000)
        {
            b = b + 1;
            b = stoll(a);
            b = cbrt(b);
            b = b + 1;
            b = b * b * b;
        }
        if (!IsCube(b) && b <= 1000000000000000000)
        {
            b = b - 2;
            b = stoll(a);
            b = cbrt(b);
            b = b + 1;
            b = b * b * b;
        }

        a = to_string(b);

        ch = a.length();
        kol_ch = ch;
        if (kol_ch % 2 != 0)
        {
            ch++;
        }
        for (int i = 0; i < (ch / 2); i++)
        {
            if (a[kol_ch_1 - 1] == a[kol_ch - 1])
            {
                pr_tes++;
            }
            else if (a[kol_ch_1 - 1] != a[kol_ch - 1])
            {
                pr_tes = 0;
                kol_ch_1 = 1;
                break;
            }
            kol_ch_1++;
            kol_ch--;
        }

        if (pr_tes == ch / 2)
        {
            cout << a;
            break;
        }
    }
}
