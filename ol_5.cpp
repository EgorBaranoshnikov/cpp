#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    long long ch, kol_ch, kol_ch_1 = 1, pr_tes = 0, b;
    float a_1, kor;
    string a;
    cin >> a;
    ch = a.length();
    kol_ch = ch;
    if (kol_ch % 2 != 0)
    {
        ch++;
    }

    while (true)
    {
        for (int i = 0; i < (ch / 2); i++)
        {
            if (a[kol_ch_1 - 1] == a[kol_ch - 1])
            {
                pr_tes++;
            }
            else if (a[kol_ch_1 - 1] != a[kol_ch - 1])
            {
                break;
            }
            kol_ch_1++;
            kol_ch--;
        }

        if (pr_tes == ch / 2)
        {
            a_1 = stof(a);
            kor = cbrt(a_1);
            if (kor == round(kor))
            {
                cout << a_1;
                break;
            }
            else
            {
                b = stoi(a);
                b = b - 10;
                a = to_string(b);
            }
        }
        else
        {
            b = stoi(a);
            b = b - 1;
            a = to_string(b);
        }
    }
}