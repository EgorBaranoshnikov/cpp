#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool wuw(const vector<vector<int>> s, int start, vector<int> col)
{
    queue<int> q;
    q.push(start);
    col[start] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : s[u])
        {
            if (col[v] == -1)
            {
                col[v] = col[u] ^ 1;
                q.push(v);
            }
            else if (col[v] == col[u])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> s(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        s[u].push_back(v);
        s[v].push_back(u);
    }
    vector<int> col(n + 1, -1);
    bool pr = true;
    for (int i = 1; i <= n; ++i)
    {
        if (col[i] == -1)
        {
            if (!wuw(s, i, col))
            {
                pr = false;
                break;
            }
        }
    }
    if (pr)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}