#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    int ac = a, bc = b;
    int sum_a = 0, sum_b = 0;
    while (ac)
    {
        sum_a += ac % 10;
        ac /= 10;
    }
    while (bc)
    {
        sum_b += bc % 10;
        bc /= 10;
    }
    if (sum_a != sum_b)
    {
        return sum_a < sum_b;
    }
    else
    {
        return a < b;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    for (int q = 0; q < n; q++)
    {
        cin >> s[q];
    }
    sort(s.begin(), s.end(), cmp);
    for (auto e : s)
    {
        cout << e << " ";
    }
}