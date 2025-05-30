#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> dp(n);
    vector<int> prev(n, -1);
    vector<int> path;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    dp[0] = s[0];
    if (n > 1)
    {
        if (s[0] + s[1] > s[1])
        {
            dp[1] = s[0] + s[1];
            prev[1] = 0;
        }
        else
        {
            dp[1] = s[1];
            prev[1] = -1;
        }
    }
    for (int i = 2; i < n; ++i)
    {
        if (dp[i - 1] > dp[i - 2])
        {
            dp[i] = dp[i - 1] + s[i];
            prev[i] = i - 1;
        }
        else
        {
            dp[i] = dp[i - 2] + s[i];
            prev[i] = i - 2;
        }
    }
    cout << dp[n - 1] << endl;
    int current = n - 1;
    while (current >= 0)
    {
        path.push_back(current + 1);
        current = prev[current];
    }
    reverse(path.begin(), path.end());
    for (size_t i = 0; i < path.size(); ++i)
    {
        if (i != 0)
            cout << " ";
        cout << path[i];
    }
    cout << endl;

    return 0;
}