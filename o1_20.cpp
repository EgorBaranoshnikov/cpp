#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

int main()
{
    long long n, r;
    cin >> n >> r;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    long long i = 0, j = 0, dist = 0, cnt = 0;
    while (j != n - 1 || dist > r)
    {
        if (dist <= r)
        {
            j++;
            dist = a[j] - a[i];
        }
        else
        {
            i++;
            dist = a[j] - a[i];
        }
        if (dist > r)
        {
            cnt += n - j;
        }
    }
    cout << cnt;
}