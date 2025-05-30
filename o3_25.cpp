#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> s(n, vector<long long>(m));
    vector<vector<long long>> p(n + 1, vector<long long>(m + 1, -1));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> s[i][j];
        }
    }
    p[0][1] = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            p[i][j] = max(p[i][j - 1], p[i - 1][j]) + s[i - 1][j - 1];
        }
    }
    vector<string> t;
    cout << p[n][m] << endl;
    int i1 = n, i2 = m;
    while (i1 != 1 || i2 != 1) {
        if (p[i1][i2 - 1] > p[i1 - 1][i2]) {
            t.push_back("R");
            i2--;
        }
        else {
            t.push_back("D");
            i1--;
        }

    }
    for (int i = t.size() - 1; i >= 0; --i)
    {
        cout << t[i] << " ";
    }
}