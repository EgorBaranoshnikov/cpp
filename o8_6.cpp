#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long a, l, r;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cin >> l >> r;
    l--;
    r--;
    sort(s.begin() + l, s.begin() + r + 1);
    for (auto e : s)
    {
        cout << e << " ";
    }
}