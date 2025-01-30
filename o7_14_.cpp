#include <iostream>
#include <vector>

using namespace std;

long long main()
{
    long long n, s;
    cin >> n;
    for (long long i = 0; i <= n; i++)
    {
        s = s + i * i;
    }
    cout << s;
}