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
    for (int q = n - 1; q >= 1; --q)
    {
        a[q] = a[q] - a[q - 1];
    }
    for (int q = n - 1; q >= 1; --q)
    {
        a[q] = a[q] - a[0];
    }
    long long i = 0, j = 0, s = a[0];
    bool go = true;
    while (go)
    {
        if (s < k)
        {
            if (j == n - 1)
            {
                go = false;
            }
            else
            {
                j++;
                s += a[j];
            }
        }
        else if (s >= k)
        {
            otv += (n - j);
            s -= a[i++];
        }
    }
    cout << otv;
}