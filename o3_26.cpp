#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> s;
    for (int e : a)
    {
        auto it = lower_bound(s.begin(), s.end(), e);
        if (it == s.end())
        {
            s.push_back(e);
        }
        else
        {
            *it = e;
        }
    }
    cout << s.size() << endl;
}