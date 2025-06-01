#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

map<int, set<int>> edge(int n, vector<pair<int, int>> &ed)
{
    map<int, set<int>> vert;
    for (int i = 1; i <= n; ++i)
    {
        vert[i] = set<int>();
    }
    for (auto [from_ver, to_ver] : ed)
    {
        vert[from_ver].insert(to_ver);
        vert[to_ver].insert(from_ver);
    }
    return vert;
}

void dfs(int start_ver, int color, vector<int> &used, map<int, set<int>> &g, bool &is_bipa)
{
    used[start_ver] = color;
    for (auto neig_ver : g[start_ver])
    {
        if (is_bipa)
            return;
        if (used[neig_ver] == 0)
        {
            dfs(neig_ver, 3 - color, used, g, is_bipa);
        }
        else if (used[neig_ver] == color)
        {
            is_bipa = true;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> ed;
    for (int i = 0; i < m; ++i)
    {
        int from_ver, to_ver;
        cin >> from_ver >> to_ver;
        ed.emplace_back(from_ver, to_ver);
    }
    map<int, set<int>> vert = edge(n, ed);
    vector<int> used(n + 1);
    bool is_bipa = false;
    for (int i = 1; i <= n; ++i)
    {
        if (!used[i])
        {
            dfs(i, 1, used, vert, is_bipa);
        }
    }
    if (is_bipa)
        cout << "No";
    else
        cout << "Yes";
}