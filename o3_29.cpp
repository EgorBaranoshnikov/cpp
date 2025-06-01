#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<vector<int>> k;
vector<bool> p;
int otv = 0;

void dfs(int v)
{
    p[v] = true;
    for (int u : k[v])
    {
        if (!p[u])
        {
            otv++;
            dfs(u);
        }
    }
}

int main()
{
    int n, s;
    cin >> n >> s;
    s--;
    k.resize(n);
    p.resize(n, false);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int r;
            cin >> r;
            if (r == 1 && i != j)
            {
                k[i].push_back(j);
            }
        }
    }
    dfs(s);
    cout << otv << endl;
}