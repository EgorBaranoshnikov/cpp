#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    vector<vector<int>> s(a, vector<int>(b));
    for (int i = 0; i < a; i++)
    {
        for (int q = 0; q < b; q++)
        {
            cin >> s[i][q];
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int q = 0; q < a; q++)
        {
            cout << s[q][i] << ' ';
        }
        cout << endl;
    }
}