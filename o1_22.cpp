#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<int> s(a);
    for (int i = 0; i < a; ++i)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    int m;
    cin >> m;
    vector<int> q(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> q[i];
    }
    for (int i = 0; i < m; ++i)
    {
        int L = -1, R = a;
        while (R - L > 1)
        {
            int k = (R + L) / 2;
            if (s[k] <= q[i])
            {
                L = k;
            }
            else
            {
                R = k;
            }
        }
        cout << R << " ";
    }
}