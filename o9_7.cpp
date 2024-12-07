#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, otv = 0, pr = 0;
    string prr;
    cin >> a;
    vector<vector<string>> s(a, vector<string>(a));
    for (int i = 0; i < a; i++)
    {
        cin >> prr;
        for (int q = 0; q < a; q++)
        {
            s[i][q] = prr[q];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < a; q++)
        {
            if (s[i][q] == "C")
            {
                pr++;
            }
        }
        otv = otv + (pr * (pr - 1) / 2);
        pr = 0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < a; q++)
        {
            if (s[q][i] == "C")
            {
                pr++;
            }
        }
        otv = otv + (pr * (pr - 1) / 2);
        pr = 0;
    }
    cout << otv;
}