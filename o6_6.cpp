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
    cout << min_element(s.begin(), s.end()) - s.begin() + 1;
}