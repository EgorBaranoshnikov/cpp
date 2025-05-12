#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    string k;
    vector<vector<int>> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> k;
        cin >> a >> b;
        vector<int> t = {b, i + 1, a};
        v.emplace_back(t);
    }
    sort(v.begin(), v.end());
    int s = 0;
    bool ok = true;
    for (auto e : v)
    {
        s += e[2];
        if (s > e[0])
        {
            ok = false;
        }
    }
    if (ok)
    {
        for (auto e : v)
        {
            cout << e[1] << endl;
        }
    }
    else
    {
        cout << "-1";
    }
}