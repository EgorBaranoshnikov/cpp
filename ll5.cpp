#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, otv = 0, tek = 1;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p.begin(), p.end());
    for (int i = n; i >= 1; i--)
    {
        if (p[tek - 1] != otv + 1 && i != 1)
        {
            i = i - 2;
            otv++;
        }
        else if (p[tek - 1] == otv + 1)
        {
            if (p[tek - 1] == p[tek])
            {
                tek++;
                i++;
            }

            tek++;
            otv++;
        }
    }
    cout << otv;
}