#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    vector<int> p(n + 1);
    p[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        p[i] = p[i - 1] + a[i - 1];
    }
    bool af = false;
    for (int i = 0; i < n - k; ++i)
    {
        if (p[i + k + 1] - p[i] == m)
        {
            cout << i + 1;
            af = true;
            break;
        }
    }
    if (!af)
    {
        cout << 0;
    }
}