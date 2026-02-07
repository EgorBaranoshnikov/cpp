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

int prov(vector<vector<int>> p, int n)
{
    int kl = 0;
    int otv = n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if ((p[i][2] - p[i][0] + p[j][2] - p[j][0] >=
                 max(p[i][2], p[j][2]) - min(p[i][0], p[j][0])) &&
                (p[i][3] - p[i][1] + p[j][3] - p[j][1] >=
                 max(p[i][3], p[j][3]) - min(p[i][1], p[j][1])))
            {
                if (p[i][4] == 0 && p[j][4] == 0)
                {
                    otv--; // мы нашли новый кластер
                    kl++;
                    p[i][4] = kl;
                    p[j][4] = kl;
                    continue;
                }
                if (p[i][4] == 0 || p[j][4] == 0)
                {
                    otv--; // мы нашли новое пересечение
                    p[i][4] = max(p[i][4], p[j][4]);
                    p[j][4] = max(p[i][4], p[j][4]);
                    continue;
                }
                if (p[i][4] != p[j][4])
                {
                    otv--; // мы нашли пересечение кластеров и сейчас будем их объединять
                    int a = p[i][4], b = p[j][4];
                    int c = max(a, b);
                    for (int v = 0; v < n; v++)
                        if (p[v][4] == a || p[v][4] == b)
                            p[v][4] = c;
                    continue;
                }
            }
        }
    }
    return otv;
}

int main()
{
    int n, r, otv;
    cin >> n;
    vector<vector<int>> p(n, vector<int>(5));
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i][0] >> p[i][1] >> p[i][2] >> p[i][3] >> p[i][4];
    }
    for (int i = 0; i < n; ++i)
    {
        p[i][0] = min(p[i][0], p[i][2]);
        p[i][1] = min(p[i][1], p[i][3]);
        p[i][2] = max(p[i][0], p[i][2]);
        p[i][3] = max(p[i][1], p[i][3]);
        p[i][0] -= p[i][4];
        p[i][1] -= p[i][4];
        p[i][2] += p[i][4];
        p[i][3] += p[i][4];
        p[i][4] = 0;
    }
    otv = prov(p, n);
    cout << otv;
}