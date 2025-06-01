#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(n, vector<int>(m, 0));
    s[0][0] = 1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i >= 2 && j >= 1)
            {
                s[i][j] += s[i - 2][j - 1];
            }
            if (i >= 1 && j >= 2)
            {
                s[i][j] += s[i - 1][j - 2];
            }
        }
    }
    cout << s[n - 1][m - 1];
}