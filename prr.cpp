#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> s(6, -1);
    int mmax = -1;
    int maxlen = 0;
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (s[m % 3] < 0)
            s[m % 3] = i;
        m = (((m + a) % 3) + 3) % 3;
        if (s[m % 3] >= 0)
        {
            s[(m % 3) + 3] = i;
            if (s[(m % 3) + 3] - s[m % 3] + 1 > maxlen)
            {
                maxlen = s[(m % 3) + 3] - s[m % 3] + 1;
                mmax = m % 3;
            }
        }
    }
    if (mmax >= 0)
        cout << s[mmax] + 1 << " " << s[mmax + 3] + 1;
    else
        cout << mmax;
}