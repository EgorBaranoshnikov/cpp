#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long a, b, h1 = 1, h2 = 1, p = 0;
    cin >> a;
    cin >> b;
    for (int i = 0; i < 1000001; i++)
    {
        if (h1 + h2 == a)
        {
            if (h1 * h2 == b)
            {
                cout << h2 << " " << h1;
                break;
            }
        }
        if (p == 1)
        {
            h2++;
            p = 0;
        }
        else
        {
            h1++;
            p = 1;
        }
    }
}