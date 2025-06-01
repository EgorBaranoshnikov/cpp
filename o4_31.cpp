// #include <iostream>
// #include <vector>
// #include <map>
// #include <set>
// #include <algorithm>
// #include <queue>
// #include <climits>
// #include <fstream>
// #include <fstream>
// #include <climits>

#include <iostream>
#include <vector>
#include <set>
#include <climits>

using namespace std;

const int INF = INT_MAX;

vector<int> dijkstra(const vector<vector<pair<int, int>>> &g, int s, int n)
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
    int n, m;
    cin >> n;
    vector<int> cost(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> cost[i];
    }
    cin >> m;
    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        g[u].emplace_back(v, cost[u]);
        g[v].emplace_back(u, cost[v]);
    }
    vector<int> dist = dijkstra(g, 0, n);
    if (dist[n - 1] == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dist[n - 1] << endl;
    }
}