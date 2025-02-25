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
    if (asd(n) && n != 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
}