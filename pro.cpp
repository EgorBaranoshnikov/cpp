#include <iostream>
#include <vector>

using namespace std;

long long main()
{
    long long x, j;
    cin >> x;
    vector<long long> s(x, 1);
    s[0] = 0;
    s[1] = 0;
    for (long long i = 2; i <= x; i++)
    {
        if (s[i] == 1)
        {
            cout << i << " ";
            for (j = i * i; j <= x; j = j + i)
            {
                s[j] = 0;
            }
        }
    }
    return 0;
}