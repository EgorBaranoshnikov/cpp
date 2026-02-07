#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << 1;
    }
    else if (n == 1)
    {
        cout << max(0LL, m - 2);
    }
    else if (m == 1)
    {
        cout << max(0LL, n - 2);
    }
    else
    {
        cout << (n - 2) * (m - 2);
    }
}