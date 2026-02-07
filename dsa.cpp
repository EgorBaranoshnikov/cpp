#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;

    if (a == 0 && b == 0)
    {
        cout << -1;
        return 0;
    }

    vector<bool> ii(n + 1, false);
    vector<pair<int, int>> otv;

    for (int i = 1; i <= n && a > 0; i++)
    {
        if (!ii[i])
        {
            otv.push_back({i, x});
            a--;
            int left = max(1, i - x);
            int right = min(n, i + x);
            for (int j = left; j <= right; j++)
            {
                ii[j] = true;
            }
        }
    }

    for (int i = 1; i <= n && b > 0; i++)
    {
        if (!ii[i])
        {
            otv.push_back({i, y});
            b--;
            int left = max(1, i - y);
            int right = min(n, i + y);
            for (int j = left; j <= right; j++)
            {
                ii[j] = true;
            }
        }
    }

    bool ll = true;
    for (int i = 1; i <= n; i++)
    {
        if (!ii[i])
        {
            ll = false;
            break;
        }
    }

    if (!ll)
    {
        cout << -1;
    }
    else
    {
        for (auto &p : otv)
        {
            cout << p.first << " " << p.second << endl;
        }
    }
}