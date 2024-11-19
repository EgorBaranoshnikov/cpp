#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long a;
    vector<long> s;
    cin >> a;
    while (a)
    {
        s.push_back(a);
        cin >> a;
    }
    cout << s.size() << endl;

    reverse(s.begin(), s.end());
    for (auto e : s)
    {
        cout << e << " ";
    }
}