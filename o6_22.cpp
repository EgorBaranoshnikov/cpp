#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cin >> m;
    sort(a.begin(), a.end());

    for (int i = 0; i < m; ++i)
    {
        int b;
        cin >> b;
        auto it = upper_bound(a.begin(), a.end(), b);
        cout << (it - a.begin()) << endl;
    }
}