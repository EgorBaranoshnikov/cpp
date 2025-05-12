#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    vector<int> s1(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> s1[i];
    }
    s1[n] = s1[n - 1] + 1;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        vector<int>::iterator upper;
        vector<int>::iterator lower;
        lower = lower_bound(s1.begin(), s1.end(), x);
        upper = upper_bound(s1.begin(), s1.end(), x);
        if (x == s1[n])
        {
            cout << 0 << endl;
        }
        else if (upper == lower)
        {
            cout << 0 << endl;
        }
        else 
        {
            cout << (lower - s1.begin()) + 1 << " ";
            cout << (upper - s1.begin()) << endl;
        }
    }
}     