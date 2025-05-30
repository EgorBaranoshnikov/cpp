#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n + 1, 10000000);
    s[0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j * j * j <= i; ++j)
        {
            if (s[i - j * j * j] + 1 < s[i])
            {
                s[i] = s[i - j * j * j] + 1;
            }
        }
    }
    cout << s[n] << endl;
}