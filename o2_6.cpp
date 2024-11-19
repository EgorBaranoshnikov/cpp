#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, pos, x;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cin >> pos >> x;
    s.insert(s.begin() + pos, x);
    for (auto e : s)
    {
        cout << e << " ";
    }
}