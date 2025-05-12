#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n >> k;
    vector<int> s1(n + 2);
    vector<int> s2(k);
    s1[0] = -1;
    for (int i = 1; i <= n; ++i)
    {
        cin >> s1[i];
    }
    s1[n + 1] = s1[n] + 1;
    for (int i = 0; i < k; ++i)
    {
        int L = 0, R = n + 1;
        cin >> x;
        while (R - L > 1)
        {
            int z = (R + L) / 2;
            if (s1[z] <= x)
            {
                L = z;
            }
            else
            {
                R = z;
            }
        }
        if (L == 0)
        {
            cout << s1[1] << endl;
        }
        else if (R == n + 1)
        {
            cout << s1[n] << endl;
        }

        else if ((x - s1[L]) <= (s1[R] - x))
        {
            cout << s1[L] << endl;
        }
        else
        {
            cout << s1[R] << endl;
        }
    }
}