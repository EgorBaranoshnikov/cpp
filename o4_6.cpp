#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long a, q, l, r;
    cin >> a;
    vector<long> s(100);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        l--;
        r--;
        cout << *max_element(s.begin() + l, s.begin() + r + 1) << endl;
    }
}