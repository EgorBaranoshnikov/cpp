#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> p(n + 1, 0);
    for (int i = 1; i <= n; ++i)
        p[i] = p[i - 1] + a[i - 1];
    int ibest = 0;
    int jbest = 0;
    int imin = 0;
    for (int j = 1; j < n; ++j)
    {
        if ((p[j + 1] - p[imin]) % 3 == 0)
        {
            if (((j + 1) - imin) > ((jbest + 1) - ibest))
            {
                jbest = j;
                ibest = imin;
            }
        }
    }
    if (ibest == 0 && jbest == 0)
    {
        cout << -1;
    }
    else
    {
        cout << ibest + 1 << " " << jbest + 1 << endl;
    }
    return 0;
}