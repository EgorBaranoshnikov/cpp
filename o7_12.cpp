#include <iostream>

using namespace std;

double f(int m, int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    if (n == 0)
    {
        return f(m - 1, 1);
    }
    return f(m - 1, f(m, n - 1));
}

int main()
{
    int n, m;
    cin >> m >> n;
    cout << f(m, n);
}