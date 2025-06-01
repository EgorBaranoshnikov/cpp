#include <iostream>
#include <vector>

using namespace std;

bool dfs(int v, const vector<vector<int>> &g, vector<int> &vvv)
{
    vvv[v] = 1;

    for (int u = 0; u < g[v].size(); ++u)
    {
        if (g[v][u] == 1)
        {
            if (vvv[u] == 1)
            {
                return true;
            }
            if (vvv[u] == 0 && dfs(u, g, vvv))
            {
                return true;
            }
        }
    }

    vvv[v] = 2;
    return false;
}

bool uwu(const vector<vector<int>> &g, int n)
{
    vector<int> vvv(n, 0);

    for (int i = 0; i < n; ++i)
    {
        if (vvv[i] == 0 && dfs(i, g, vvv))
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> g(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> g[i][j];
        }
    }

    if (uwu(g, n))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}