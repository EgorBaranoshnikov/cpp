#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> s(N, vector<int>(N));
    vector<pair<int, int>> p;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> s[i][j];
        }
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            if (s[i][j] == 1)
            {
                p.emplace_back(i + 1, j + 1);
            }
        }
    }

    for (const auto & e : p)
    {
        cout << e.first << " " << e.second << endl;
    }
}