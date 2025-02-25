#include <iostream>

using namespace std;

double p(double a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return p(a * a, n / 2);
    }
    else
    {
        return a * p(a, n - 1);
    }
}

int main()
{
    double a;
    int n;
    cin >> a >> n;
    cout << p(a, n);
}