#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(n, vector<int>(m, 1));
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < m; ++j)
        {
            s[i][j] = s[i - 1][j] + s[i][j - 1];
        }
    }
    cout << s[n - 1][m - 1];
}