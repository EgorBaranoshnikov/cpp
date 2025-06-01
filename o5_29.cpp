#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <deque>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, set<int>> v;
    for (int i = 1; i <= n; ++i)
    {
        v[i] = set<int>();
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                v[i + 1].insert(j + 1);
                v[j + 1].insert(i + 1);
            }
        }
    }
    int start_v, end_v;
    cin >> start_v >> end_v;
    vector<bool> used(n + 1, false);
    deque<int> q;
    q.push_back(start_v);
    used[start_v] = true;
    vector<int> d(n + 1, -1);
    d[start_v] = 0;
    while (!q.empty())
    {
        int cut_v = q.front();
        q.pop_front();
        for (auto e : v[cut_v])
        {
            if (!used[e])
            {
                used[e] = true;
                q.push_back(e);
                d[e] = d[cut_v] + 1;
                if (e == end_v)
                {
                    cout << d[e] << endl;
                    return 0;
                }
            }
        }
    }
    cout << (d[end_v] == -1 ? -1 : d[end_v]) << endl;
}