#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> s(N, vector<int>(N, 0));

    for (int i = 0; i < M; ++i)
    {
        int q, w;
        cin >> q >> w;
        q--;
        w--;
        s[q][w] = 1;
        s[w][q] = 1;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }
}