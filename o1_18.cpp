#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<pair<int, int>> factors;
    for (int i = 2; i * i <= a; i++)
    {
        int cnt = 0;
        while (a % i == 0)
        {
            cnt++;
            a /= i;
        }
        if (cnt > 0) factors.emplace_back(i, cnt);
    }
    if (a != 1)
    {
        factors.emplace_back(a, 1);
    }
    for (auto factor : factors)
    {
        cout << factor.first << " ";
    }
    cout << endl;
    for (auto factor : factors)
    {
        cout << factor.second << " ";
    }
}