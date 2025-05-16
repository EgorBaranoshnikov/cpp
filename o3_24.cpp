#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, a1 = 1, a2 = 1, a3 = 2, pr;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    else if (n == 1)
    {
        cout << 1;
    }
    else if (n == 2)
    {
        cout << 2;
    }
    else
    {
        for (int i = 0; i <= n - 3; ++i)
        {
            pr = a3;
            a3 = a1 + a2 + a3;
            a1 = a2;
            a2 = pr;
        }
        cout << a3;
    }
}