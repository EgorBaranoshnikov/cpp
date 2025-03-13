#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

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
    int n, otv = 0;
    cin >> n;
    for (int i = n + 1; i < 2 * n; i++)
    {
        if (asd(i))
        {
            otv++;
        }
    }
    cout << otv;
}