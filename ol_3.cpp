#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    long long a, vop = 0, toch = 0, no_toch = 0, vs;
    long long ch_1, ch_2, ch_3, ch_3_1, ch_3_2;
    string b;
    cin >> b;
    for (int i = 0; i < 10; i++)
    {
        if (b[i] == "?"[0])
        {
            vop++;
        }
        if (b[i] == "x"[0])
        {
            no_toch++;
        }
        if (b[i] == "o"[0])
        {
            toch++;
        }
    }
    if (toch >= 2 && toch <= 3)
    {
        vs = vop + toch;
        ch_1 = pow(vs, 4);
        ch_2 = ch_1 - pow(vop, 4);
        ch_3 = pow((vs - 1), 4);
        ch_3_1 = pow((vs - 2), 4);
        ch_3_2 = ch_2 - (ch_3 - ch_3_1) * toch;
        cout << ch_3_2;
    }

    if (toch >= 0 && toch <= 1)
    {
        vs = vop + toch;
        ch_1 = pow(vs, 4);
        ch_2 = ch_1 - pow(vop, 4);
        ch_3 = pow((vs - 1), 4);
        ch_3_1 = pow((vs - 2), 4);
        ch_3_2 = ch_2 - (ch_3 - ch_3_1) * toch;
        cout << ch_3_2;
    }
}