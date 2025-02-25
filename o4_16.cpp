#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sym(int n)
{
    int sym = 0;
    while (n != 0)
    {
        sym += n % 10;
        n /= 10;
    }
    return sym;
}

bool asd(int n)
{
    for (int d = 2; d * d <= n; ++d)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b, tek, max = 0, maxsh = -1, pr;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        tek = i;
        if (asd(tek) && tek != 1)
        {
            pr = sym(tek);
            if (pr >= max)
            {
                max = pr;
                maxsh = tek;
            }
        }
    }
    cout << maxsh;
}