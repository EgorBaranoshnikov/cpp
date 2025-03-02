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
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (asd(i) && asd(n - i))
        {
            cout << i << " " << n - i;
            break;
        }
    }
    
}