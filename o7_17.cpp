#include <iostream>
#include <vector>

using namespace std;

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
    int otv = 0, t = 0, j = 2, n, sh, a, a1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cin >> a1;
        a = a1;
        while (j <= a)
        {
            if (asd(j) && a % j == 0)
            {
                t++;
                a = a / j;
            }
            j++;
        }
        if (otv < t)
        {
            sh = a1;
            otv = t;
        }
        t = 0;
        j = 2;
    }
    cout << sh;
}