#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long n, k, otv = 0;
    cin >> n >> k;
    vector<long long> a(n);
    for (int q = 0; q < n; ++q)
    {
        cin >> a[q];
    }
    int i = 0, j = 0, s = a[0];
    bool go = true;
    while (go)
    {
        if (s == k)
        {
            go = false;
        }
        else if (s < k)
        {
            if (j == n - 1)
                go = false;
            else
                s += a[++j];
        }
        else
        {
            s -= a[i++];
        }
    }
    if (s == k)
        cout << i << " " << j << endl;
    else
        cout << "-1 -1" << endl;
}