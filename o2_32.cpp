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
#include <cmath>
#include <iomanip>
#include <limits>
#include <fstream>

using namespace std;

struct Point
{
    double x, y;
};

double wuw(const Point &a, const Point &b)
{
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

double prim(const vector<Point> &s)
{
    int n = s.size();
    if (n == 0)
    {
        return 0.0;
    }
    vector<vector<double>> g(n, vector<double>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            g[i][j] = wuw(s[i], s[j]);
        }
    }
    const double INF = numeric_limits<double>::max();
    vector<bool> used(n, false);
    vector<double> min_e(n, INF);
    vector<int> sel_e(n, -1);
    min_e[0] = 0;
    double otv = 0.0;
    for (int i = 0; i < n; ++i)
    {
        int v = -1;
        for (int j = 0; j < n; ++j)
        {
            if (!used[j] && (v == -1 || min_e[j] < min_e[v]))
            {
                v = j;
            }
        }
        if (min_e[v] == INF)
        {
            return -1.0;
        }
        used[v] = true;
        if (sel_e[v] != -1)
        {
            otv = max(otv, g[v][sel_e[v]]);
        }
        for (int to = 0; to < n; ++to)
        {
            if (g[v][to] < min_e[to])
            {
                min_e[to] = g[v][to];
                sel_e[to] = v;
            }
        }
    }
    return otv;
}

int main()
{
    int n;
    cin >> n;
    vector<Point> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i].x >> s[i].y;
    }
    double otv = prim(s);
    cout << fixed << setprecision(2) << otv;
}