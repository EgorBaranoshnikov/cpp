#include <iostream>

using namespace std;

int main()
{
    long long n, cur, a, b, mod;
    long long max_1, i_1, max_2, i_2;
    cin >> n >> cur >> a >> b;
    for (int i = 0; i < n; i++)
    {
        mod = 1791791791;
        cur = (cur * a + b) % mod;
    }
}