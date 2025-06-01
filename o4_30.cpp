#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> s(n + 1);
    vector<int> p(n + 1, 0);
    vector<int> otv;
    queue<int> q;

    for (int i = 1; i <= n; ++i)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; ++j)
        {
            int pr;
            cin >> pr;
            s[pr].push_back(i);
            p[i]++;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (p[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        otv.push_back(u);

        for (int v : s[u])
        {
            if (--p[v] == 0)
            {
                q.push(v);
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout << otv[i] << " ";
    }
}