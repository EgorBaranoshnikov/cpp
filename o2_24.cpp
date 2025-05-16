#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, a1 = 1, a2 = 1, b;
    cin >> n;
    if (n == 0)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i <= n - 2; ++i)
        {
            b = a2;
            a2 = a1 + a2;
            a1 = b;
        }
        cout << a2;
    }
}