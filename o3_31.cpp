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
#include <algorithm>

using namespace std;

const int INF = 1e9;

pair<vector<int>, vector<int>> dijkstra(const vector<vector<pair<int, int>>> &g, int s, int n)
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
    return {d, p};
}

vector<int> res(int s, int f, const vector<int> &p)
{
    vector<int> path;
    for (int v = f; v != -1; v = p[v])
    {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());
    return path;
}

int main()
{
    int n, m, s, f;
    cin >> n >> m >> s >> f;
    vector<vector<pair<int, int>>> g(n);
    for (int i = 0; i < m; ++i)
    {
        int a, b, w;
        cin >> a >> b >> w;
        g[a].emplace_back(b, w);
        g[b].emplace_back(a, w);
    }
    auto [d, p] = dijkstra(g, s, n);
    for (int i = 0; i < n; ++i)
    {
        if (d[i] == INF)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << d[i] << " ";
        }
    }
    cout << endl;
    if (d[f] == INF)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> path = res(s, f, p);
        cout << path.size() << endl;
        for (int v : path)
        {
            cout << v << " ";
        }
        cout << endl;
    }
}