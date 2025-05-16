#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(n, vector<int>(m));
    vector<vector<int>> p(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> s[i][j];
        }
    }
    p[0][0] = s[0][0];
    for (int i = 1; i < m; ++i) {
        p[0][i] = p[0][i - 1] + s[0][i];
    }
    for (int i = 1; i < n; ++i) {
        p[i][0] = p[i - 1][0] + s[i][0];
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            p[i][j] = min(p[i][j - 1], p[i - 1][j]) + s[i][j];
        }
    }
    cout << p[n - 1][m - 1];
}