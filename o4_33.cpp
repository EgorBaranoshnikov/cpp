#include <iostream>

using namespace std;

int main()
{
    int n;
    long long k = 3;
    cin >> n;

    if (n == 1)
    {
        cout << 3;
    }
    else
    {
        for (int i = 2; i <= n; ++i)
        {
            k = k * 2;
        }
        cout << k;
    }
}