#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, b, prov = 0, otv = 0;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (s[i] % j == 0)
            {
                prov++;
            }
        }
        if (prov == b)
        {
            otv = 1;
            break;
        }
        prov = 0;
    }
    if (otv == 1)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
}