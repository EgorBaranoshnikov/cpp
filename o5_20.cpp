#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> s[i];
    }
    sort(s.begin(), s.end());
    int L = 0, R = n;
    int otv = 0;
    while (L < R)
    {
        if (s[L] + s[R - 1] > d)
        {
             otv += 1;
             R--;
        }
        else
        {
            otv++;
            L++;
            R--;
        }
    }
    cout << otv;
}