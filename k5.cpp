#include <iostream>

using namespace std;

int main()
{
    long long n, m, e, otv = 0;
    long long l = 0, r, p;
    long a[10];
    cin >> n;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> e;
        for (int w = 0; w < n; w++)
        {
            if (w < (e - 1))
            {
                a[w] = 0;
            }
            else
            {
                a[w] = 1;
            }
        }
        l = 0;
        r = n - 1;
        otv = 0;
        while (l + 1 < r)
        {
            p = (l + r) / 2;
            if (a[p] == 1)
            {
                r = p;
                otv++;
            }
            if (a[p] == 0)
            {
                l = p;
                otv++;
            }
        }
        cout << otv << endl;
    }
}