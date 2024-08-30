#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long kol_ch_1 = 1, kol_ch, pr_tes = 0, ch, test;
    double b;
    string a;

    cin >> a;

    b = stoll(a);
    b = cbrt(b);
    test = b;
    test = b + 1;
    test = pow(test, 3);
    a = to_string(test);
    b = test;

    while (b >= 1)
    {
        b = stoll(a);
        b = cbrt(b);
        test = b;
        test = b - 1;
        test = pow(test, 3);
        a = to_string(test);
        b = test;

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