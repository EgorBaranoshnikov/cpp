#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <iomanip>

using namespace std;

bool IsCube(int N)
{
    int x = (int)pow((double)N, 1. / 3.); // вычислим кубический корень
    for (int t = x - 1; t <= x + 1; t++)  // из-за возможной ошибки округления переберем 3 соседних числа
        if (t * t * t == N)
            return true;
    return false;
}

int main()
{
    unsigned long long kol_ch_1 = 1, kol_ch, pr_tes = 0, ch, test, b, t1, t2, t3;
    string a, a_2 = "eq";
    
    for (unsigned long long i_m = 0; i_m < 1000000000000000000; i_m++)
    {
        //b = stoll(i_m);
        b = cbrt(i_m);
        b = b + 1;
        b = pow(b, 3);
        a = to_string(b);
        b = b;

        while (b >= 1)
        {
            b = stoll(a);
            b = cbrt(b);
            b = b - 1;
            b = pow(b, 3);
            a = to_string(b);
            b = b;

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
                if (a != a_2)
                {
                   cout << a << ",";                   
                   if (!IsCube(b)) {
                    cout << "<-ERR";
                   }
                   a_2 = a;
                }
                break;
            }
        }
    }
    cout << "end";
}
