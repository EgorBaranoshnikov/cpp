#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, s, pr = 0;
    cin >> a;
    vector<string> t(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s;
        vector<int> q(s);
        for (int w = 0; w < s; w++)
        {
            cin >> q[w];
        }
        sort(q.begin(), q.end());
        for (int e = 0; e < (s - 1); e++)
        {
            if (q[e] == q[e + 1])
            {
                t[i] = "NO";
                pr++;
                break;
            }
        }
        if (pr == 0)
        {
            t[i] = "YES";
        }
        pr = 0;
    }
    for (int i = 0; i < a; i++)
    {
        cout << t[i] << endl;
    }
}