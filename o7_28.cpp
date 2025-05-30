#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int otv = 1000000;
    vector<vector<int>> s(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if ((s[i][j] + s[j][k] + s[k][i]) < otv)
                {
                    otv = (s[i][j] + s[j][k] + s[k][i]);
                }
            }
        }
    }
    cout << otv << endl;
}