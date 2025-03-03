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
    int imin = 0;
    int ibest = 0;
    int jbest = 1;
    for (int j = 2; j < n; ++j)
    {
        if (a[j - 1] < a[imin])
            imin =  j - 1;
        if ((double)a[j] / a[imin] > (double)a[jbest] / a[ibest])
        {
            jbest = j;
            ibest = imin;
        }
    }
    if ((double)a[jbest] / a[ibest] > 1)
    {
        cout << ibest + 1 << " " << jbest + 1 << endl;
    }
    else
    {
        cout << "0 0";
    }
}