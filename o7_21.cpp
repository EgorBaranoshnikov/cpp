#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    vector<int> p(s.size());
    p[0] = 0;
    for (int i = 1; i < s.size(); ++i)
    {
        p[i] = p[i - 1] + (s[i] == s[i - 1]);
    }
    int l, r;
    for (int i = 0; i < n; ++i)
    {
        cin >> l >> r;
        l--;
        r--;
        cout << p[r] - p[l] << endl;
    }
}