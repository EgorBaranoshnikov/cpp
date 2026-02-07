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

int prim(int n, const vector<vector<pair<int, int>>> &graph, const vector<bool> &s)
{
    vector<int> min_e(n + 1, INF);
    vector<bool> in_mst(n + 1, false);
    set<pair<int, int>> q;

    for (int i = 1; i <= n; ++i)
    {
        if (s[i])
        {
            min_e[i] = 0;
            q.insert({0, i});
        }
    }
    int otv = 0;
    while (!q.empty())
    {
        int v = q.begin()->second;
        q.erase(q.begin());

        if (in_mst[v])
            continue;
        in_mst[v] = true;
        otv += min_e[v];

        for (const auto &edge : graph[v])
        {
            int to = edge.first;
            int cost = edge.second;
            if (!in_mst[to] && cost < min_e[to])
            {
                q.erase({min_e[to], to});
                min_e[to] = cost;
                q.insert({min_e[to], to});
            }
        }
    }
    return otv;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<bool> s(n + 1, false);
    for (int i = 0; i < k; ++i)
    {
        int cit;
        cin >> cit;
        s[cit] = true;
    }
    vector<vector<pair<int, int>>> graph(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            int co;
            cin >> co;
            if (i != j)
            {
                graph[i].push_back({j, co});
            }
        }
    }
    int otv = prim(n, graph, s);
    cout << otv << endl;
}