#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n, k;
    cin >> n;
    long long cost = 3;
    long long s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (k == 1)
        {
            s += cost;
            cost++;
        }
        else
        {
            cost -= 3;
            if (cost < 3)
            {
                cost = 3;
            }
        }
    }
    cout << s;
}