#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<vector<int>> s;
vector<bool> p;
vector<pair<int, int>> k;

void dfs(int v, int v2)
{
    p[v] = true;
    for (int u : s[v])
    {
        if (!p[u])
        {
            k.push_back({min(v, u), max(v, u)});
            dfs(u, v);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    s.resize(n + 1);
    p.resize(n + 1, false);

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        s[u].push_back(v);
        s[v].push_back(u);
    }
    dfs(1, -1);

    if (k.size() != n - 1)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        cout << k.size() << endl;
        for (auto e : k)
        {
            cout << e.first << " " << e.second << endl;
        }
    }
}