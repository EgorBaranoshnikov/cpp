#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, pr1, pr2, pr3;
    cin >> n;
    vector<int> s(n + 1);
    s[1] = 0;
    s[2] = 1;
    if (n == 1 || n == 0)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; i < n + 1; ++i)
        {
            if (i % 2 == 0 && i % 3 == 0)
            {
                s[i] = min({s[i - 1], s[i / 2], s[i / 3]}) + 1;
            }
            else if (i % 2 == 0 && i % 3 != 0)
            {
                s[i] = min(s[i - 1], s[i / 2]) + 1;
            }
            else if (i % 2 != 0 && i % 3 == 0)
            {
                s[i] = min(s[i - 1], s[i / 3]) + 1;
            }
            else if (i % 2 != 0 && i % 3 != 0)
            {
                s[i] = s[i - 1] + 1;
            }
        }
        cout << s[n];
    }
}