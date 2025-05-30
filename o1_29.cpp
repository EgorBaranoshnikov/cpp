#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> s;
vector<bool> p;
vector<int> kk;
int tt;

void dfs(int v)
{
    p[v] = true;
    kk[v] = tt;
    for (int u : s[v])
    {
        if (!p[u])
        {
            dfs(u);
        }
    }

}

int main()
{
    int n, m;
    cin >> n >> m;

    s.resize(n + 1);
    p.assign(n + 1, false);
    kk.resize(n + 1);
    tt = 1;

    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        s[u].push_back(v);
        s[v].push_back(u);
    }

    int otv = 0;
    for (int v = 1; v <= n; ++v)
    {
        if (!p[v])
        {
            dfs(v);
            tt++;
            otv++;
        }
    }

    cout << otv << endl;
    for (int i = 1; i <= n; ++i)
    {
        cout << kk[i] << " ";
    }
}