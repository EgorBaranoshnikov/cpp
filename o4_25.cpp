#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);
    vector<vector<int>> s(8, vector<int>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> s[i][j];
        }
    }
    vector<vector<int>> p(8, vector<int>(8));
    p[7][0] = 0;
    for (int i = 6; i >= 0; i--)
    {
        p[i][0] = p[i + 1][0] + s[i][0];
    }
    for (int i = 1; i <= 7; i++)
    {
        p[7][i] = p[7][i - 1] + s[7][i];
    }

    for (int i = 6; i >= 0; i--)
    {
        for (int j = 1; j <= 7; j++)
        {
            p[i][j] = min({p[i][j - 1], p[i + 1][j], p[i + 1][j - 1]}) + s[i][j];
        }
    }
    cout << p[0][7];
}  