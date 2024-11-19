#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long a, b;
    cin >> a;
    cin >> b;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    cout << count(s.begin(), s.end(), b);
}