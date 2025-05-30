#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> p(n + 1);
    vector<int> t;
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    p[1] = s[0];
    p[2] = max(s[1], s[0] + s[1]);
    t.push_back(1);
    for (int i = 3; i <= n; ++i)
    {
        p[i] = max(p[i - 1], p[i - 2]) + s[i - 1];
    }
    cout << p[n] << endl;
    int j = n;
    while (j > 0)
    {
        t.push_back(j);
        if (p[j - 1] > p[j - 2])
        {
            j = j - 1;
        }
        else
        {
            j = j - 2;
        }
    }
    reverse(t.begin(), t.end());
    for (int i = 0; i < t.size() - 1; ++i)
    {
        cout << t[i] << " ";
    }
}