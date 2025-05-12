#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    int max = 0, otv = 0;;
    for (int i = 1; i <= n; ++i)
    {
        if (s[n - i] > max)
        {
            max = s[n - i];
        }
        otv = otv + max;
    }
    cout << otv;
}