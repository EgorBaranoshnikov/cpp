#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long a, cnt = 0, k, j, h;
    cin >> a;
    vector<long> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < a - 2; i++)
    {
        for (int q = i + 1; q < a - 1; q++)
        {
            for (int w = q + 1; w < a; w++)
            {
                k = s[i];
                j = s[q];
                h = s[w];
                if (k + j > h && j + h > k && k + h > j)
                {
                   cnt++;
                }
            }
        }
    }
    cout << cnt;
}