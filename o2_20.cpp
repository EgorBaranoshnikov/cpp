#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    long long n1, n2;
    cin >> n1;
    vector<long long> s1(n1);
    for (int i = 0; i < n1; ++i)
    {
        cin >> s1[i];
    }
    cin >> n2;
    vector<long long> s2(n2);
    for (int i = 0; i < n2; ++i)
    {
        cin >> s2[i];
    }
    long long i1 = 0, i2 = 0, ibest, jbest;
    long long max1 = 0, max2 = max(s1[n1 - 1], s2[n2 - 1] + 1);
    bool go = true;
    while (go)
    {
        ibest = s1[i1];
        jbest = s2[i2];

        if (max(max1, max2) - min(max1, max2) > max(ibest, jbest) - min(ibest, jbest))
        {
            max1 = ibest;
            max2 = jbest;
        }

        if (ibest == jbest)
        {
            cout << ibest << " " << jbest;
            go = false;
        }

        if (i1 == n1 - 1 && i2 == n2 - 1)
        {
            cout << max1 << " " << max2;
            go = false;
        }

        if (ibest > jbest && i2 < n2 - 1)
        {
            i2++;
        }
        else if (ibest < jbest && i1 < n1 - 1)
        {
            i1++;
        }
        else if (i2 == n2 - 1 && i1 != n1 - 1)
        {
            i1++;
        }
        else if (i1 == n1 - 1 && i2 != n2 - 1)
        {
            i2++;
        }
        
    }
}