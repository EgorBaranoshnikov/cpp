#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <climits>
#include <algorithm>

using namespace std;

const int INF = INT_MAX;

vector<int> dijkstra(const vector<vector<pair<int, int>>> &g, int s, int n, vector<int> &prev)
{
    vector<int> d(n + 1, INF);
    prev.assign(n + 1, -1);
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
                prev[to] = v;
                q.insert({d[to], to});
            }
        }
    }
    return d;
}

int main()
{
    int N, M, S, F;
    cin >> N >> M >> S >> F;
    vector<vector<pair<int, int>>> g(N + 1);
    for (int i = 0; i < M; ++i)
    {
        int b, e, w;
        cin >> b >> e >> w;
        g[b].emplace_back(e, w);
        g[e].emplace_back(b, w);
    }
    vector<int> prev;
    vector<int> dist = dijkstra(g, S, N, prev);
    if (dist[F] == INF)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << dist[F] << endl;
    vector<int> pat;
    for (int v = F; v != -1; v = prev[v])
    {
        pat.push_back(v);
    }
    reverse(pat.begin(), pat.end());

    for (size_t i = 0; i < pat.size(); ++i)
    {
        if (i > 0)
        {
            cout << ' ';
        }
        cout << pat[i];
    }
}