// #include <iostream>
// #include <vector>
#include <map>
#include <set>
// #include <algorithm>
// #include <queue>
// #include <climits>
// #include <fstream>

#include <iostream>
#include <vector>
#include <fstream>
#include <climits>

using namespace std;

const int INF = INT_MAX;

map<int, set<int>> build_graph(int n, vector<pair<int, int>> &edges)
{
    map<int, set<int>> graph;
    for (int i = 1; i <= n; ++i)
    {
        graph[i] = set<int>();
    }
    for (auto [u, v] : edges)
    {
        graph[u].insert(v);
        graph[v].insert(u);
    }
    return graph;
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

vector<int> dijkstra1(const vector<vector<pair<int, int>>> &g, int s, int n)
{
    vector<int> d(n, INF);
    vector<bool> u(n, false);
    d[s] = 0;

    for (int i = 0; i < n; ++i)
    {
        int v = -1;
        for (int j = 0; j < n; ++j)
        {
            if (!u[j] && (v == -1 || d[j] < d[v]))
            {
                v = j;
            }
        }

        if (v == -1 || d[v] == INF)
        {
            break;
        }

        u[v] = true;
        for (const auto &e : g[v])
        {
            int to = e.first;
            int len = e.second;
            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
            }
        }
    }
    return d;
}

vector<int> dijkstra2(const vector<vector<pair<int, int>>> &g, int s, int n)
{
    vector<int> d(n, INF);
    vector<int> p(n, -1);
    d[s] = 0;

    set<pair<int, int>> q;
    q.insert({d[s], s});

    while (!q.empty())
    {
        int v = q.begin()->second;
        q.erase(q.begin());
        for (const auto &edge : g[v])
        {
            int to = edge.first;
            int len = edge.second;

            if (d[v] + len < d[to])
            {
                q.erase({d[to], to});
                d[to] = d[v] + len;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
    return d;
}

int main()
{
    int n, s, f, t;
    cin >> n >> s >> f;
    vector<vector<pair<int, int>>> g(n);
    s--;
    f--;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> t;
            if (t != -1 && i != j)
            {
                g[i].push_back({j, t});
            }
        }
    }
    vector<int> distances = dijkstra1(g, s, n);
    if (distances[f] == INF)
    {
        cout << -1;
    }
    else
    {
        cout << distances[f];
    }
}