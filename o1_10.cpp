#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
    int f, x;
    cin >> f;
    set<int> s;
    for (int i = 0; i < f; i++)
    {
        cin >> x;
        s.insert(x);
    }
    for (auto i : s)
        cout << i << " ";
}