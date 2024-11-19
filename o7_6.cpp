#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long a;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    sort(s.rbegin(), s.rend());
    for (auto e : s)
    {
        cout << e << " ";
    }
}