#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    map<string, int> s;
    string t;
    int k;

    while (cin >> t >> k)
    {
        s[t] += k;
    }

    for (auto e : s)
    {
        cout << e.first << " " << e.second << endl;
    }
}