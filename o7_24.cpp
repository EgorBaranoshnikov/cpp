#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> p(n + 1);
    if (n == 0)
        return 0;
    if (n == 1)
        return 2;
    if (n == 2)
        return 4;
    p[0] = 1;
    p[1] = 2;
    p[2] = 4;
    for (int i = 3; i <= n; ++i)
    {
        p[i] = p[i - 1] + p[i - 2] + p[i - 3];
    }
    cout << p[n];
}