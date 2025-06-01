#include <iostream>
#include <fstream>

using namespace std;

int f(int n)
{
    int k;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return f(n / 2);
    }
    if (n % 2 == 1)
    {
        k = (n - 1) / 2;
        return f(k) + f(k + 1);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << f(n);
}