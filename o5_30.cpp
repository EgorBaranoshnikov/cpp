#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

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

bool dfs(int v, int parent, map<int, set<int>> &graph, vector<int> &visited, vector<int> &path, vector<int> &cycle)
{
    visited[v] = 1;
    path.push_back(v);

    for (int neighbor : graph[v])
    {
        if (neighbor == parent)
            continue;
        if (visited[neighbor] == 1)
        {
            auto it = find(path.begin(), path.end(), neighbor);
            if (it != path.end())
            {
                cycle = vector<int>(it, path.end());
                return true;
            }
        }
        else if (visited[neighbor] == 0)
        {
            if (dfs(neighbor, v, graph, visited, path, cycle))
            {
                return true;
            }
        }
    }

    visited[v] = 2;
    path.pop_back();
    return false;
}

void find_cycle(int n, map<int, set<int>> &graph)
{
    vector<int> visited(n + 1, 0);
    vector<int> path;
    vector<int> cycle;

    for (int v = 1; v <= n; ++v)
    {
        if (visited[v] == 0 && dfs(v, -1, graph, visited, path, cycle))
        {
            break;
        }
    }

    if (cycle.empty())
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        cout << cycle.size() << endl;
        for (int vertex : cycle)
        {
            cout << vertex << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> edges;
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        edges.emplace_back(u, v);
    }
    map<int, set<int>> graph = build_graph(n, edges);
    find_cycle(n, graph);
}
