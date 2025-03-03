#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> p(n + 1);
    for (int i = 1; i <= n; ++i)
        p[i] = p[i - 1] + a[i - 1];
    int ibest = 0;
    int jbest = 0;
    int imin = 0;
    for (int j = 1; j < n; ++j)
    {
        if (p[j] <= p[imin])
            imin = j;
        if (p[j + 1] - p[imin] > p[jbest + 1] - p[ibest])
        {
            jbest = j;
            ibest = imin;
        }
    }
    cout << ibest + 1 << endl << jbest + 1 << endl;
}