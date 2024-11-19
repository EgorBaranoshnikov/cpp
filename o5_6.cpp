#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long a, b;
    cin >> a >> b;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    auto pos = find(s.begin(), s.end(), b);
    if (pos != s.end())
    {
        s.erase(pos);
    }
    for (auto e : s)
    {
        cout << e << " ";
    }
}