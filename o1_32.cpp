#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <climits>

using namespace std;

const int INF = INT_MAX;

int prim(vector<vector<pair<int, int>>> &s, int n)
{
    vector<int> min_edge(n + 1, INF);
    vector<bool> in_mst(n + 1, false);
    set<pair<int, int>> pq;
    int otv = 0;

    min_edge[1] = 0;
    pq.insert({0, 1});

    for (int i = 0; i < n; ++i)
    {
        if (pq.empty())
        {
            return -1;
        }

        int v = pq.begin()->second;
        int co = pq.begin()->first;
        pq.erase(pq.begin());
        in_mst[v] = true;
        otv += co;

        for (auto [to, e] : s[v])
        {
            if (!in_mst[to] && e < min_edge[to])
            {
                pq.erase({min_edge[to], to});
                min_edge[to] = e;
                pq.insert({min_edge[to], to});
            }
        }
    }
    return otv;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> s(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        s[a].push_back({b, c});
        s[b].push_back({a, c});
    }
    int otv = prim(s, n);
    cout << otv;
}