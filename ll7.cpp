#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(const vector<int> &a, const vector<int> &b)
{
    return a[1] < b[1];
}

int main()
{
    long long n, s;
    cin >> n >> s;
    vector<vector<int>> p(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> p[i][1] >> p[i][0];
    }
    sort(p.begin(), p.end(), cmp);

    long long kol = 0, cen = 0;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < p[i][0]; j++)
        {
            if (kol < s)
            {
                kol++;
                cen += p[i][1];
            }
            else
            {
                cout << cen;
                return 0;
            }
        }
    }
    cout << cen;
    return 0;
}