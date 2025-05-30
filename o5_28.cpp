#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> s(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> s[i][j];
        }
    }

    vector<int> p(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> p[i];
    }

    int otv = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (s[i][j] == 1 && p[i] != p[j])
            {
                otv++;
            }
        }
    }
    cout << otv;
}