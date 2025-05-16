#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> s(n + 1, vector<int>(2));
    s[1][0] = 0;
    s[1][1] = k - 1;
    for (int i = 2; i <= n; ++i)
    {
        s[i][0] = s[i - 1][1];
        s[i][1] = (s[i - 1][0] + s[i - 1][1]) * (k - 1);
    }
    cout << s[n][0] + s[n][1];
}