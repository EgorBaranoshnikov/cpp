#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> s(n + 1, -1);
    s[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (i - a >= 0 && s[i - a] != -1)
        {
            s[i] = max(s[i - a] + 1, s[i]);
        }
        if (i - b >= 0 && s[i - b] != -1)
        {
            s[i] = max(s[i - b] + 1, s[i]);
        }
        if (i - c >= 0 && s[i - c] != -1)
        {
            s[i] = max(s[i - c] + 1, s[i]);
        }
    }
    cout << s[n];
}
