#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int y1, y2;
    cin >> n;
    vector<int> s(n);
    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    if (n == 1)
    {
        cout << 0;
    }
    else
    {
        p[0] = 0;
        p[1] = abs(s[1] - s[0]);

        for (int i = 2; i < n; ++i)
        {
            y1 = p[i - 1] + abs(s[i] - s[i - 1]);
            y2 = p[i - 2] + 3 * abs(s[i] - s[i - 2]);
            p[i] = min(y1, y2);
        }
        cout << p[n - 1];
    }
}