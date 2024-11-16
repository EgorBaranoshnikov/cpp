#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, s, pr = 0, w;
    cin >> a;
    vector<int> q[100];
    for (int i = 0; i < a; i++)
    {
        cin >> s;
        for (int i = 0; i < s; i++)
        {
            cin >> q[i];
        }
        for (int i = 1; i <= s; i++)
        {
            for (int j = 1; j <= s - 1; j++)
            {
                if (q[j] == q[j - 1])
                {
                    cout << "NO";
                    pr++;
                    break;
                }
            }
        }
        if (pr > 0)
        {
            cout << "YES";
            pr == 0;
        }
    }
}