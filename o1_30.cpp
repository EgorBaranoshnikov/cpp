#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>

using namespace std;

bool isTree(const vector<vector<int>> &tt, int n)
{
    int uwu = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (tt[i][j] == 1)
            {
                uwu++;
            }
        }
    }
    if (uwu != n - 1)
    {
        return false;
    }

    vector<bool> ii(n, false);
    queue<int> q;
    q.push(0);
    ii[0] = true;
    int kk = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v = 0; v < n; ++v)
        {
            if (tt[u][v] == 1 && !ii[v])
            {
                ii[v] = true;
                q.push(v);
                kk++;
            }
        }
    }
    return (kk == n);
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tt(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> tt[i][j];
        }
    }

    if (isTree(tt, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}