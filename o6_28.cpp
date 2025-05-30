#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    int u, v;
    cin >> n >> m;
    vector<vector<int>> s(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v;
        s[u][v] = 1;
        s[v][u] = 1;
    }

    int otv = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (s[i][j] == 1)
            {
                for (int k = j + 1; k <= n; ++k)
                {
                    if (s[i][k] == 1 && s[j][k] == 1)
                    {
                        otv++;
                    }
                }
            }
        }
    }
    cout << otv << endl;
}