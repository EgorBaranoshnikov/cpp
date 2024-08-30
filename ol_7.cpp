#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>

using namespace std;

int main()
{
    int b, N = 0, S = 0, E = 0, W = 0, prov = 0, i = 0, prov_1 = 0, prov_2 = 0;
    string a;
    cin >> a;
    while (true)
    {
        if (a[i] == "N"[0])
        {
            N = N + 1;
            prov++;
        }
        if (a[i] == "S"[0])
        {
            S = S + 1;
            prov++;
        }
        if (a[i] == "E"[0])
        {
            E = E + 1;
            prov++;
        }
        if (a[i] == "W"[0])
        {
            W = W + 1;
            prov++;
        }
        i++;
        if (prov != i)
        {
            break;
        }
    }
    if (N == 0 && S == 0)
    {
        prov_1++;
    }
    if (N > 0 && S > 0)
    {
        prov_1++;
    }

    if (E == 0 && W == 0)
    {
        prov_2++;
    }
    if (E > 0 && W > 0)
    {
        prov_2++;
    }

    if (prov_1 > 0 && prov_2 > 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}