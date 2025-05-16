#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, pr1, pr2, pr3;
    cin >> n;
    int a;
    a = n + 2;
    vector<int> s(a);
    s[1] = 0;
    s[2] = 1;
    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; i < n; ++i)
        {
            if (i % 2 == 0 && i % 3 == 0)
            {
                s[i] = min(s[i - 1], s[i / 2], s[i / 3]);
            }
            else if (i % 2 == 0 && i % 3 != 0)
            {
                s[i] = min(s[i - 1], s[i / 2]);
            }
            else if (i % 2 != 0 && i % 3 == 0)
            {
                s[i] = min(s[i - 1], s[i / 3]);
            }
        }
        cout << s[n + 1];
    }
}